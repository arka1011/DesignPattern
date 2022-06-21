#pragma once
#include <string>

class CarDesign {
public:
    virtual void buildBody(std::string body) = 0;
    virtual void installEngine(std::string engine) = 0;
    virtual void attachWheels(std::string wheels) = 0;
    virtual void paint(std::string color) = 0;
    virtual void getCarDetails() = 0;
};

class Car : public CarDesign {
public:
    Car();
    Car(std::string brand);
    void buildBody(std::string body);
    void installEngine(std::string engine);
    void attachWheels(std::string wheels);
    void paint(std::string color);
    void getCarDetails();
private:
    std::string _brand;
    std::string _bodyType;
    std::string _engineType;
    std::string _wheelType;
    std::string _paintColor;
};