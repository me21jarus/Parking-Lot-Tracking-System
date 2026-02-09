#ifndef CAR_H
#define CAR_H

class Car : public Vehicle{
public:
    Car(const string& number) : Vehicle(number){}

    string getType() const override{
        return "Car";
    }

    int getRatePerHour() const override{
        return 50;
    }
};

#endif