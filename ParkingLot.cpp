#include "ParkingLot.h"
#include<iostream>
#include<fstream>
using namespace std;

ParkingLot::ParkingLot(int totalSlots, ParkingStorage* storage): storage(storage){
    for(int i=1;i<=totalSlots;i++){
        slots.push_back(ParkingSlot(i));
    }
    storage->load(slots);
}

// void ParkingLot::loadFromFile(){
//     ifstream file("parking_data.txt");
//     if(!file.is_open()){
//         return;
//     }
//     int slotNumber;
//     string vehicleNumber, vehicleType;

//     while(file >> slotNumber >> vehicleNumber >> vehicleType){
//         for(auto& slot:slots){
//             if(slot.getSlotNumber() == slotNumber){
//                 Vehicle v(vehicleNumber, vehicleType);
//                 slot.parkVehicle(v);
//                 break;
//             }
//         }
//     }
//     file.close();
// }

// void ParkingLot::saveToFile(){
//     ofstream file("parking_data.txt");
//     for(auto& slot:slots){
//         if(slot.isOccupied()){
//             file << slot.getSlotNumber()<<" "<<slot.getVehicle().getNumber()<<" "<<slot.getVehicle().getType()<<endl;
//         }
//     }
//     file.close();
// }

void ParkingLot::parkVehicle(const Vehicle& v){
    for(auto& slot:slots){
        if(!slot.isOccupied()){
            slot.parkVehicle(v);
            storage->save(slots);
            cout<<"Vehicle parked at the slot "<<slot.getSlotNumber()<<endl;
            return;
        }
    }
    cout<<"Parking slot"<<endl;
}

void ParkingLot::removeVehicle(const string& vehicleNumber){
    for(auto& slot:slots){
        if(slot.isOccupied() && slot.getVehicle().getNumber() == vehicleNumber){
            slot.removeVehicle();
            storage->save(slots);
            cout<<"Vehicle removed from slot "<<slot.getSlotNumber()<<endl;
            return;
        }
    }
    cout<<"Vehicle not found"<<endl;
}

void ParkingLot::displayStatus(){
    for(auto& slot:slots){
        if(slot.isOccupied()){
            cout<<"Slot: "<< slot.getSlotNumber()<<": "<<slot.getVehicle().getNumber()<<endl;
        }
        else{
            cout<<"Slot: "<< slot.getSlotNumber()<<": Empty"<<endl;
        }
    }
}