#pragma once
#include "Car.h"

class CarBuilder {
public:
    virtual void buildBody() = 0;
    virtual void installEngine() = 0;
    virtual void attachWheels() = 0;
    virtual void paint() = 0;
    virtual Car* getCar() = 0;
};

class TataMotors : public CarBuilder {
public:
    TataMotors();
    void buildBody();
    void installEngine();
    void attachWheels();
    void paint();
    Car* getCar();
private:
    Car* _car;
};

class Mahindra : public CarBuilder {
public:
    Mahindra();
    void buildBody();
    void installEngine();
    void attachWheels();
    void paint();
    Car* getCar();
private:
    Car* _car;
};