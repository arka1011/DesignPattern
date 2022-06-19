#include "car.h"
#include <iostream>

Car::Car() : _engine(Engine::none), _model_name("undefined") {}
Car::Car(Engine engine, std::string model_name) : _engine(engine), _model_name(model_name) {}
Car::~Car(){}

std::string Car::getEngine() {
    switch (_engine) {
        case 0:
            return "none";
        case 1:
            return "v6";
        case 2:
            return "v8";
        case 3:
            return "w12";
    }
    return "error";
}

void Car::setEngine(Engine engine) {
    _engine = engine;
}

std::string Car::getModelName() {
    return _model_name;
}
void Car::setModelName(std::string modelName) {
    _model_name = modelName;
}

SportsCar::SportsCar() {}
SportsCar::SportsCar(Engine engine, std::string model_name) : Car(engine,model_name) {}
SportsCar::~SportsCar() {}

void SportsCar::getCarDetail() {
    std::cout << "SportsCar\n" << "Engine: " << getEngine() << "\nModel Name: " << getModelName() << std::endl;
}

Sedan::Sedan() {}
Sedan::Sedan(Engine engine, std::string model_name) : Car(engine,model_name) {}
Sedan::~Sedan() {}
    
void Sedan::getCarDetail() {
    std::cout << "Sedan\n" << "Engine: " << getEngine() << "\nModel Name: " << getModelName() << std::endl;
}