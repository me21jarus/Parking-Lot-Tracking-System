#ifndef PARKINGSLOT_H
#define PARKINGSLOT_H

#include "Vehicle.h"
#include<memory>
#include <ctime>
using namespace std;

class ParkingSlot{
    private:
        int slotNumber;
        bool occupied;
        unique_ptr<Vehicle> vehicle;
        time_t entryTime;

    public:
        ParkingSlot();
        ParkingSlot(int number);

        bool isOccupied() const;
        int getSlotNumber() const;

        void parkVehicle(unique_ptr<Vehicle> vehicle);
        void removeVehicle();

        time_t getEntryTime() const;

        const Vehicle* getVehicle() const;
};

#endif