#include "CarBuilder.h"

TataMotors::TataMotors() {
    _car = new Car("TataMotors");
}
void TataMotors::buildBody() {
    _car->buildBody("steel");
}
void TataMotors::installEngine() {
    _car->installEngine("3 cylinder 1.2 liter");
}
void TataMotors::attachWheels() {
    _car->attachWheels("18 inch");
}
void TataMotors::paint() {
    _car->paint("blue");
}
Car* TataMotors::getCar() {
    return _car;
}

Mahindra::Mahindra() {
    _car = new Car("Mahindra");
}
void Mahindra::buildBody() {
    _car->buildBody("Aluminium");
}
void Mahindra::installEngine() {
    _car->installEngine("4 Cylinder 1 liter");
}
void Mahindra::attachWheels() {
    _car->attachWheels("19 inch");
}
void Mahindra::paint() {
    _car->paint("black");
}
Car* Mahindra::getCar() {
    return _car;
}