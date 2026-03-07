#ifndef CarH
#define CarH
#include<iostream>
#include "driver.h"

using namespace std;

enum Type {
  SEDAN,
  SUV,
  COUPE,
  BUS,
  VAN,
  TRUCK,
};

class Car {
  private:
    string name;
    Type type;
    Driver driver;
  public:
    Car(string name, Type type, Driver driver);
};

#endif
