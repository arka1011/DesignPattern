#pragma once
#include "car.h"

enum carType {SPORTSCAR,SEDAN};

class CarFactory {
public:
    static Car* createCar(carType type);
private:
    CarFactory();
    ~CarFactory();
};