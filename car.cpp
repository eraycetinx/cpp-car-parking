#include<iostream>
#include "car.h"

using namespace std;

Car::Car(string name, Type type, Driver driver): driver(driver) {
  this->name=name;
  this->type=type;
};


