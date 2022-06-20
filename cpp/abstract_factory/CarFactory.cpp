#include "CarFactory.h"


CarFactory::CarFactory () {}
CarFactory::~CarFactory () {}

KolaktaCarFactory::KolaktaCarFactory () {}
KolaktaCarFactory::~KolaktaCarFactory () {}
Car* KolaktaCarFactory::createCar (CarType carType) {
    switch (carType) {
        case eSEDAN:
            return new Sedan("Kolkata");
        case eCOUPE:
            return new Coupe("Kolkata");
        case eSUV:
            return new SUV("Kolkata");
    }
    return nullptr;
}

ChennaiCarFactory::ChennaiCarFactory () {}
ChennaiCarFactory::~ChennaiCarFactory () {}
Car* ChennaiCarFactory::createCar (CarType carType) {
    switch (carType) {
        case eSEDAN:
            return new Sedan("Chennai");
        case eCOUPE:
            return new Coupe("Chennai");
        case eSUV:
            return new SUV("Chennai");
    }
    return nullptr;
}

PuneCarFactory::PuneCarFactory () {}
PuneCarFactory::~PuneCarFactory () {}
Car* PuneCarFactory::createCar (CarType carType) {
    switch (carType) {
        case eSEDAN:
            return new Sedan("Pune");
        case eCOUPE:
            return new Coupe("Pune");
        case eSUV:
            return new SUV("Pune");
    }
    return nullptr;
}