#include "Director.h"

ShowRoom::ShowRoom() : _carBuilder(nullptr) {}
ShowRoom::ShowRoom(CarBuilder* builder) : _carBuilder(builder) {}
void ShowRoom::placeOrder() {
    _carBuilder->buildBody();
    _carBuilder->installEngine();
    _carBuilder->attachWheels();
    _carBuilder->paint();
}
Car* ShowRoom::getDelivery() {
    return _carBuilder->getCar();
}