#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include<vector>
#include <string>
#include "ParkingSlot.h"
#include "ParkingStorage.h"

using namespace std;

class ParkingLot{
    private:
        vector<ParkingSlot> slots;
        ParkingStorage* storage;
    public:
        ParkingLot(int totalSlots, ParkingStorage* storage);

        void parkVehicle(unique_ptr<Vehicle> v);
        void removeVehicle(const string& vehicleNumber);
        void displayStatus();   
};

#endif