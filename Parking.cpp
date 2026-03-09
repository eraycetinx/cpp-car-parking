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
  int randomX = rand() % 51;
  int randomY = rand() % 51;
  Park p;
  p.licensePlate = licensePlate;

  while(1) {
    for(int i = 0; i<parks.size(); i++) {
      Park park = parks[i];
      if (park.location.X == randomX) {
        randomX = rand() % 51;
      }
      if (park.location.Y == randomY) {
        randomY = rand() % 51;
      }
    }
    break;
  }
  p.location.X = randomX;
  p.location.Y = randomY;
  return p;
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