#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include<vector>
#include <string>
#include "ParkingSlot.h"
using namespace std;

class ParkingLot{
    private:
        vector<ParkingSlot> slots;
        void loadFromFile();
        void saveToFile();
    public:
        ParkingLot(int totalSlots);

        void parkVehicle(const Vehicle& v);
        void removeVehicle(const string& vehicleNumber);
        void displayStatus();
        
};

#endif