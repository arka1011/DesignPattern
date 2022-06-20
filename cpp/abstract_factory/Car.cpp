#include <iostream>
#include "Car.h"

Car::Car() : _mfgLocation("undefined") {}
Car::Car(std::string location) : _mfgLocation(location) {}
Car::~Car() {}
std::string Car::getLocation () { return _mfgLocation; }
void Car::setLocation (std::string location) { _mfgLocation = location; }

Sedan::Sedan(std::string location) : Car(location) {}
void Sedan::getDetails () {
    std::cout << "This is a Sedan mfgd in " << getLocation() << std::endl;
}

Coupe::Coupe(std::string location) : Car(location) {}
void Coupe::getDetails () {
    std::cout << "This is a Coupe mfgd in " << getLocation() << std::endl;
}

SUV::SUV(std::string location) : Car(location) {}
void SUV::getDetails () {
    std::cout << "This is a SUV mfgd in " << getLocation() << std::endl;
}