#ifndef PARKINGSTORAGE_H
#define PARKINGSTORAGE_H

#include<string>
#include<vector>
#include "ParkingSlot.h"
using namespace std;

class ParkingStorage{
    public:
        virtual void save(const vector<ParkingSlot>& slots)=0;
        virtual void load(vector<ParkingSlot>& slots)=0;
        virtual ~ParkingStorage(){}
};

#endif