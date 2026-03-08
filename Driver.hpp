#ifndef Driver_H_
#define Driver_H_

#include<iostream>
#include<string>

#include "Driver.hpp"

class Car;

using namespace std;

class Driver {
  private:
    string name;
    float balance;

  public:
    Driver(string name); 
    float pay(float fee);
    string getDriverName();
    float getBalance();
    float setBalance(float balance);
};

#endif
