//this program calculates the distance in miles a vehicle can go based on the one time capacity of fuel holding in gallons
#include<iostream>
using namespace std;
int main()
{
  float gallons, milespergallon,miles;
  
  cout<<"enter the fuel capacity of the vehicle in gallons "<<endl;
  cin>>gallons;
  cout<<"enter miles per gallon of the vehicle"<<endl;
  cin>>milespergallon;
  miles=milespergallon*gallons;
  cout<<"the distance in miles you can travel withhout refueling is"<<miles<<endl;
  return 0;
  }
