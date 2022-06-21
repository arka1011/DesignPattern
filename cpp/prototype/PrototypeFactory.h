#pragma once
#include "Car.h"
#include <unordered_map>

class PrototypeFactory {
public:
    PrototypeFactory();
    ~PrototypeFactory();
    Car* getCarPrototype(CarType CarType);
private:
    std::unordered_map<CarType,Car*> _map;
};