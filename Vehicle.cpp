#include "Vehicle.h"

Vehicle::Vehicle() {
    vehicleNumber = "";
    vehicleType = "";
}

Vehicle::Vehicle(string number, string type){
    vehicleNumber = number;
    vehicleType = type;
}

string Vehicle::getNumber() const{
    return vehicleNumber;
}

string Vehicle::getType() const{
    return vehicleType;
}