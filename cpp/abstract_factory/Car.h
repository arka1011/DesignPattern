#pragma once
#include <string>

class Car {
public:
    Car();
    Car(std::string location);
    virtual ~Car();
    virtual void getDetails () = 0;
    void setLocation (std::string location);
    std::string getLocation ();
private:
    std::string _mfgLocation;
};

class Sedan : public Car {
public:
    Sedan(std::string location);
    void getDetails();
};

class Coupe : public Car {
public:
    Coupe(std::string location);
    void getDetails();
};

class SUV : public Car {
public:
    SUV(std::string location);
    void getDetails();
};