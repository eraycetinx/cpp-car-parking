#ifndef Car_H_
#define Car_H_

#include "Driver.hpp"
#include<iostream>

using namespace std;

class Driver;

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
    string licensePlate;
    Type type;
    Driver& driver;
  public:
    Car(string licensePlate, Type type, Driver driver);
    string getCarLicensePlate();
    Type getCarType();
    Driver getCarDriver();
};

#endif
