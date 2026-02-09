#ifndef PARKINGSLOT_H
#define PARKINGSLOT_H

#include "Vehicle.h"

class ParkingSlot{
    private:
        int slotNumber;
        bool occupied;
        Vehicle vehicle;

    public:
        ParkingSlot();
        ParkingSlot(int number);

        bool isOccupied() const;
        int getSlotNumber() const;

        void parkVehicle(const Vehicle& v);
        void removeVehicle();
        Vehicle getVehicle() const;
};

#endif