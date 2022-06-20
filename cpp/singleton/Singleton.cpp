#include "Singleton.h"

Singleton* Singleton::_instance = nullptr;

Singleton::Singleton() : _val(0) {}

Singleton* Singleton::getInstance() {
    if (_instance == nullptr) {
        _instance = new Singleton();
    } 
    return _instance;
}

int Singleton::getValue() {
    return _val;
}

void Singleton::setValue(int val) {
    _val = val;
}