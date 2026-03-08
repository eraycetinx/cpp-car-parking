#include<iostream>
#include<vector>

#include "Parking.hpp"

Parking::Parking() {
  feePerHour = 20;
  location.X = 50;
  location.Y = 50;
};

Car* Parking::getCarInfo(string licensePlate) {
  for(int i = 0; i<this->cars.size(); i++) {
    Car car = this->cars[i];
    if(car.getCarLicensePlate() == licensePlate) {
      return &car;
    }
  }
  return NULL;
}

vector<Car> Parking::getAllCars() {
  return this->cars;
}

bool Parking::payParkingFee(string licensePlate) {
  Car* car = this->getCarInfo(licensePlate);
  Driver driver = car->getCarDriver();
  driver.pay(this->getFeePerHour());
}

bool Parking::isParkable() {
  if (this->capacity>this->carCount) {
    return true;
  }
  return false;
}

Park Parking::parkCar(string licensePlate){
  // I'll do that later.
}

float Parking::getFeePerHour() {
  return this->feePerHour;
}

int Parking::getCarCount() {
  return this->carCount;
}

int Parking::getParkingCapacity(){
  return this->capacity;
};