#pragma once
#include "Car.h"

enum CarType {eSEDAN, eCOUPE, eSUV};

class CarFactory {
public:
    virtual Car* createCar (CarType carType) = 0;

    CarFactory();
    virtual ~CarFactory();
};

class KolaktaCarFactory : public CarFactory {
public:
    KolaktaCarFactory();
    ~KolaktaCarFactory();
    Car* createCar (CarType carType);
};

class ChennaiCarFactory : public CarFactory {
public:
    ChennaiCarFactory();
    ~ChennaiCarFactory();
    Car* createCar (CarType carType);
};

class PuneCarFactory : public CarFactory {
public:
    PuneCarFactory();
    ~PuneCarFactory();
    Car* createCar (CarType carType);
};