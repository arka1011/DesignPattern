#pragma once
#include "PrototypeFactory.h"

class CarSeller {
public:
    CarSeller(PrototypeFactory* factory);
    ~CarSeller();
    Car* addToStock(CarType carType);
private:
    CarSeller();
    PrototypeFactory* _factory;
};