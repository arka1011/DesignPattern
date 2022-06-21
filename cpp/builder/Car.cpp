#include "Car.h"
#include <iostream>

Car::Car() : _brand(""), _bodyType(""), _engineType(""), _wheelType(""), _paintColor("") {}
Car::Car(std::string brand) : _brand(brand), _bodyType(""), _engineType(""), _wheelType(""), _paintColor("") {}

void Car::buildBody(std::string body) {
    _bodyType = body;
}
void Car::installEngine(std::string engine) {
    _engineType = engine;
}
void Car::attachWheels(std::string wheels) {
    _wheelType = wheels;
}
void Car::paint(std::string color) {
    _paintColor = color;
}
void Car::getCarDetails() {
    std::cout << "Brand: " << _brand << std::endl;
    std::cout << "Body: " << _bodyType << std::endl;
    std::cout << "Engine: " << _engineType << std::endl;
    std::cout << "Wheel: " << _wheelType << std::endl;
    std::cout << "Paint: " << _paintColor << std::endl;
}