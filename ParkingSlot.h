#ifndef PARKINGSLOT_H
#define PARKINGSLOT_H

#include "Vehicle.h"
#include<memory>
using namespace std;

class ParkingSlot{
    private:
        int slotNumber;
        bool occupied;
        unique_ptr<Vehicle> vehicle;;

    public:
        ParkingSlot();
        ParkingSlot(int number);

        bool isOccupied() const;
        int getSlotNumber() const;

        void parkVehicle(unique_ptr<Vehicle> vehicle);
        void removeVehicle();
        
        const Vehicle* getVehicle() const;
};

#endif