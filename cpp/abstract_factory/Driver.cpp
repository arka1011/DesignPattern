#include <iostream>
#include "CarFactory.h"

enum Location {KOLKATA, CHENNAI, PUNE};

class CarShop {
public:
    /*
    function to get geographic location
    */
    static Location getLocation() {
        /* 
        hard coding to return Kolkata
        */
        return KOLKATA;
    }
    static Car* buyCar(CarType carType) {
        CarFactory* factory = nullptr;
        Location location = getLocation();
        switch (location) {
            case KOLKATA:
                factory = new KolaktaCarFactory();
                return factory->createCar(carType);
            case CHENNAI:
                factory = new ChennaiCarFactory();
                return factory->createCar(carType);
            case PUNE:
                factory = new PuneCarFactory();
                return factory->createCar(carType);
        }
        return nullptr;
    }
private:
    CarShop();
};

int main () {

    Car* newCar1 = CarShop::buyCar(eSEDAN);
    Car* newCar2 = CarShop::buyCar(eCOUPE);
    Car* newCar3 = CarShop::buyCar(eSUV);

    newCar1->getDetails();
    newCar2->getDetails();
    newCar3->getDetails();

    return 0;
}