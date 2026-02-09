#include "ParkingStorage.h"
#include "VehicleFactory.h"
#include<fstream>
using namespace std;

    void FileParkingStorage::save(const vector<ParkingSlot>& slots){
        ofstream file("parking_data.txt");
        for(const auto& slot : slots){
            if(slot.isOccupied()){
                file<< slot.isOccupied() << " "<< slot.getVehicle()->getNumber()<<" "<<slot.getVehicle()->getType()<<endl;
            }
        }
    }
    void FileParkingStorage::load(vector<ParkingSlot>& slots){
        ifstream file("parking_data.txt");
        if(!file.is_open()){
            return;
        }
        int slotNo;
        string number,type;
        while(file>> slotNo >> number >> type){
            for(auto& slot:slots){
                if (slot.getSlotNumber() == slotNo) {
                auto vehicle = VehicleFactory::createVehicle(type, number);
                if (vehicle) {
                    slot.parkVehicle(std::move(vehicle));
                }
            }
            }
        }
    }