#ifndef PRICINGSTRATEGY_H
#define PRICINGSTRATEGY_H

class PricingStrategy{
    public:
        virtual int calculateFee(const Vehicle* vehicle,int hours)const =0;
        virtual ~PricingStrategy(){}
};

#endif