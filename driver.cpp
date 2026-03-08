#include<iostream>
#include<string>
#include "Driver.hpp"

using namespace std;

Driver::Driver(string name) {
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

