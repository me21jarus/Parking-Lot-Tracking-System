#ifndef VEHICLEFACTORY_H
#define VEHICLEFACTORY_H

#include<memory>
#include "Car.h"
#include "Bike.h"
using namespace std;

class VehicleFactory{
public:
    static unique_ptr<Vehicle> createVehicle(const string& type,const string& number){
        if(type == "Car"){
            return make_unique<Car>(number);
        }
        else if(type == "Bike"){
            return make_unique<Bike>(number);
        }
        else{
            return nullptr;
        }
    }
};

#endif