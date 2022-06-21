#pragma once
#include <string>

enum CarType {SEDAN,COUPE};

class Car {
public:
    Car();
    virtual ~Car();
    virtual Car* clone() = 0;
    virtual void getDetails() = 0;
    virtual void setPrice(int price) = 0;
    virtual int getPrice() = 0;
};

class Sedan : public Car {
public:
    Sedan();
    Sedan(std::string brand, std::string fuelType);
    ~Sedan();

    Car* clone();
    void getDetails();

    void setPrice(int price);
    int getPrice();
private:
    std::string _brand;
    std::string _fuelType;
    int _price;
};

class Coupe : public Car {
public:
    Coupe();
    Coupe(std::string brand, std::string fuelType);
    ~Coupe();

    Car* clone();
    void getDetails();

    void setPrice(int price);
    int getPrice();
private:
    std::string _brand;
    std::string _fuelType;
    int _price;
};