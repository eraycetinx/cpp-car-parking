#ifndef DriverH
#define DriverH

#include<iostream>
#include "car.h"
using namespace std;

class Driver {
  private:
    string name;
    float balance;
    Car car;

  public:
    Driver(string name, Car car); 
    float pay(float fee);
    string getDriverName();
    float getBalance();
    float setBalance(float balance);
};

#endif
