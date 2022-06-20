#include <iostream>
#include "Singleton.h"

using namespace std;

int main () {
    Singleton* singleton = Singleton::getInstance();
    singleton->setValue(10);
    cout << singleton->getValue() << endl;

    // for any new getInstance call we will get the same object
    // and the getValue will return last modified value
    Singleton* singleton2 = Singleton::getInstance();
    cout << singleton->getValue() << endl;
    return 0;
}