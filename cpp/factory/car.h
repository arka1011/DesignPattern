#pragma once
#include <string>

enum Engine {none=0, v6, v8, w12};

class Car {
public:
    Car();
    Car(Engine engine, std::string model_name);
    virtual ~Car();

    std::string getEngine();
    void setEngine(Engine engine);

    std::string getModelName();
    void setModelName(std::string modelName);

    virtual void getCarDetail() = 0;

private:
    Engine _engine;
    std::string _model_name;
};

class SportsCar : public Car {
public:
    SportsCar();
    SportsCar(Engine engine, std::string model_name);
    ~SportsCar();

    void getCarDetail();

};

class Sedan : public Car {
public:
    Sedan();
    Sedan(Engine engine, std::string model_name);
    ~Sedan();

    void getCarDetail();

};