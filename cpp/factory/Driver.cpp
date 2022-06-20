#include <iostream>
#include <string>
#include "CarFactory.h"

int main () {
    
    Car* sportsCar = CarFactory::createCar(SPORTSCAR);
    sportsCar->setEngine(v8);
    sportsCar->setModelName("Audi R8");

    Car* sedan = CarFactory::createCar(SEDAN);
    sedan->setEngine(v6);
    sedan->setModelName("Skoda V6");

    sportsCar->getCarDetail();
    sedan->getCarDetail();

    delete sportsCar;
    delete sedan;

    return 0;
}