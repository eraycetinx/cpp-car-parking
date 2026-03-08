#include<iostream>
#include "Driver.hpp"
#include "Car.hpp"

using namespace std;

int main() {
  Driver d("Eray");
  Car c("78ds78",SEDAN,d);
  cout<<"Hello World!"<<endl;
  return 0;
}
