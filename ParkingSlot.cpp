#include "ParkingSlot.h"

ParkingSlot::ParkingSlot(){
    occupied = false;
    slotNumber = -1;
}

ParkingSlot::ParkingSlot(int number){
    slotNumber = number;
    occupied = false;
}

bool ParkingSlot::isOccupied() const{
    return occupied;
}

int ParkingSlot::getSlotNumber() const{
    return slotNumber;
}

void ParkingSlot::parkVehicle(const Vehicle& v){
    vehicle = v;
    occupied = true;
}

void ParkingSlot::removeVehicle(){
    occupied = false;
}

Vehicle ParkingSlot::getVehicle() const{
    return vehicle;
}