#include "CarSeller.h"

CarSeller::CarSeller(PrototypeFactory* factory) {
    _factory = factory;
}

CarSeller::~CarSeller() {}

Car* CarSeller::addToStock(CarType carType) {
    return _factory->getCarPrototype(carType);
}