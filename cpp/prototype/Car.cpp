#include "Car.h"
#include <iostream>

Car::Car() {}
Car::~Car() {}

Sedan::Sedan() : _brand(""), _fuelType(""), _price(0) {}
Sedan::Sedan(std::string brand, std::string fuelType) : _brand(brand), _fuelType(fuelType), _price(0) {}
Sedan::~Sedan(){}

Car* Sedan::clone() {
    return new Sedan(*this);
}
void Sedan::getDetails() {
    std::cout << "Sedan:" << std::endl;
    std::cout << "\tBrand: " << _brand << std::endl;
    std::cout << "\tFuelType: " << _fuelType << std::endl;
}

void Sedan::setPrice(int price) {
    _price = price;
}
int Sedan::getPrice() {
    return _price;
}

Coupe::Coupe() : _brand(""), _fuelType("") {}
Coupe::Coupe(std::string brand, std::string fuelType) : _brand(brand), _fuelType(fuelType) {}
Coupe::~Coupe() {}

Car* Coupe::clone() {
    return new Coupe(*this);
}
void Coupe::getDetails() {
    std::cout << "Coupe:" << std::endl;
    std::cout << "\tBrand: " << _brand << std::endl;
    std::cout << "\tFuelType: " << _fuelType << std::endl;
}

void Coupe::setPrice(int price) {
    _price = price;
}
int Coupe::getPrice() {
    return _price;
}