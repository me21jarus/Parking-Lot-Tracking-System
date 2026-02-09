#ifndef VEHICLE_H
#define VEHICLE_H

#include<string>
using namespace std;

class Vehicle{
    protected:
        string vehicleNumber;

    public:
        Vehicle();
        Vehicle(string number):vehicleNumber(number){}
        virtual ~Vehicle(){}

        string getNumber() const{
            return vehicleNumber;
        };
        virtual string getType() const=0;
        virtual int getRatePerHour() const = 0;
};

#endif