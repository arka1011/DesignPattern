#include "CarSeller.h"
#include <iostream>

int main () {

    PrototypeFactory* factory = new PrototypeFactory();
    CarSeller* seller = new CarSeller(factory);

    Car* car1 = seller->addToStock(SEDAN);
    car1->setPrice(1000);

    Car* car2 = seller->addToStock(COUPE);
    car2->setPrice(1500);

    car1->getDetails();
    std::cout <<"Price: " << car1->getPrice() << std::endl;

    car2->getDetails();
    std::cout << "Price: " << car2->getPrice() << std::endl;

    return 0;
}