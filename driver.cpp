#include<iostream>
#include "driver.h"

using namespace std;

Driver::Driver(string name, Car car): car(car) {
  this->name = name;
};

float Driver::setBalance(float balance) {
  return balance+=balance;
}

float Driver::pay(float fee) {
 return this->balance-=fee;
}

string Driver::getDriverName(){
  return this->name;
}

float Driver::getBalance(){
  return this->balance;
}

