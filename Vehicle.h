#ifndef VEHICLE_H
#define VEHICLE_H

#include<string>
using namespace std;

class Vehicle{

    private:
        string vehicleNumber;
        string vehicleType;

    public:
        Vehicle();
        Vehicle(string number, string type);

        string getNumber() const;
        string getType() const;
};

#endif