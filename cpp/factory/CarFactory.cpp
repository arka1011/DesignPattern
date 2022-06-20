#include "CarFactory.h"

CarFactory::CarFactory(){}
CarFactory::~CarFactory(){}

Car* CarFactory::createCar(carType type) {
    if (type == carType::SPORTSCAR) {
        return new SportsCar();
    } else if (type == carType::SEDAN) {
        return new Sedan();
    } else {
        return nullptr;
    }
}