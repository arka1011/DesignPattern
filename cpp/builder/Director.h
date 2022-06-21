#pragma once
#include "CarBuilder.h"

class ShowRoom {
private:
    CarBuilder* _carBuilder;
    ShowRoom();
public:
    ShowRoom(CarBuilder* builder);
    void placeOrder();
    Car* getDelivery();
};