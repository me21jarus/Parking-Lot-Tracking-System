#include "ParkingStorage.h"
#include<fstream>
using namespace std;

class FileParkingStorage : public ParkingStorage{
public:
    void save(const vector<ParkingSlot>& slots) override{
        ofstream file("parking_data.txt");
        for(const auto& slot : slots){
            if(slot.isOccupied()){
                file<< slot.isOccupied() << " "<< slot.getVehicle().getNumber()<<" "<<slot.getVehicle().getType()<<endl;
            }
        }
    }
    void load(vector<ParkingSlot>& slots) override{
        ifstream file("parking_data.txt");
        if(!file.is_open()){
            return;
        }
        int slotNo;
        string number,type;
        while(file>> slotNo >> number >> type){
            for(auto& slot:slots){
                if(slot.getSlotNumber() == number){
                    slot.parkVehicle(Vehicle(number,type));
                }
            }
        }
    }
}