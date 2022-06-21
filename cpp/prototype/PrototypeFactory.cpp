#include "PrototypeFactory.h"

PrototypeFactory::PrototypeFactory() {
    _map[SEDAN] = new Sedan("Audi A8", "diesel");
    _map[COUPE] = new Coupe("Audi R8", "petrol");
}

PrototypeFactory::~PrototypeFactory() {
    delete _map[SEDAN];
    delete _map[COUPE];
}

Car* PrototypeFactory::getCarPrototype(CarType carType) {
    return _map[carType]->clone();
}