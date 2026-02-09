#ifndef HOURLYPRICINGSTRATEGY_H
#define HOURLYPRICINGSTRATEGY_H

class HourlyPricingStrategy : public PricingStrategy{
    public:
        int calculateFee(const Vehicle* vehicle, int hours) const override{
            return vehicle->getRatePerHour()*hours;
        }
};

#endif