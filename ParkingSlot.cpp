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

void ParkingSlot::parkVehicle(unique_ptr<Vehicle> v){
    vehicle = move(v);
    entryTime = time(nullptr);
    occupied = true;
}

void ParkingSlot::removeVehicle(){
    vehicle.reset();
    occupied = false;
}

time_t ParkingSlot::getEntryTime() const{
    return entryTime;
}

const Vehicle* ParkingSlot::getVehicle() const{
    return vehicle.get();
}