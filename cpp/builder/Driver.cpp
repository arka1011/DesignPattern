#include "Director.h"

int main () {
    CarBuilder* builder1 = new TataMotors();
    CarBuilder* builder2 = new Mahindra();

    ShowRoom* shop1 = new ShowRoom(builder1);
    ShowRoom* shop2 = new ShowRoom(builder2);

    shop1->placeOrder();
    shop2->placeOrder();

    shop1->getDelivery()->getCarDetails();
    shop2->getDelivery()->getCarDetails();

    return 0;
}