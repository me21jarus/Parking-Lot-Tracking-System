#ifndef BIKE_H
#define BIKE_H

class Bike : public Vehicle{
public:
    Bike(const string& number) : Vehicle(number){}

    string getType() const override{
        return "Bike";
    }

    int getRatePerHour()const override{
        return 20;
    }
};

#endif