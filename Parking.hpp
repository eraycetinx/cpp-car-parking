#ifndef PARKING_H_
#define PARKING_H_

#include<iostream>
#include<vector>
#include "Car.hpp"

struct Location {
  int X;
  int Y;
};

struct Park {
  Location location;
  string licensePlate;
};

class Parking {
  private:
    vector<Car> cars;
    int capacity;
    int carCount;
    float feePerHour;
    Location location; // location of parkinglot
    vector<Park> park;

  public:
    Parking();
    Car* getCarInfo(string licensePlate);
    vector<Car> getAllCars();
    bool payParkingFee(string licensePlate);
    bool isParkable();
    Park parkCar(string licensePlate);
    float getFeePerHour();
    int getCarCount();
    int getParkingCapacity();
};

#endif
