#include<iostream>
#include "Car.hpp"

using namespace std;

Car::Car(string licensePlate, Type type, Driver driver): driver(driver) {
  this->licensePlate = licensePlate;
  this->type = type;
};

string Car::getCarLicensePlate() {
  return this->licensePlate;
};

Type Car::getCarType() { 
  return this->type;
};

Driver Car::getCarDriver() {
  return this->driver;
};
