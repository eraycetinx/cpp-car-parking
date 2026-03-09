#include<iostream>

#include "Driver.hpp"
#include "Car.hpp"
#include "Parking.hpp"

using namespace std;

int main() {
  srand(time(0));
  Driver d("Eray");
  Car c("78ds78",SEDAN,d);
  cout<<"Hello World!"<<endl;
  return 0;
}
