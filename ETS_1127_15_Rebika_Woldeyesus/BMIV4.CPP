#include <iostream>
using namespace std;
//this is a code to calculate BMI
int
main ()
{
  float height, weight, BMI;
  char f,F,m,M;
  char gender;
  int numpeople;
  cout<<"Enter the number of person";
  cin>>numpeople;
  for(int i=0;i<10;i+=1){
  cout << "Enter your gender as f or m";
  cin >> gender;
  cout << "Enter your height in meters: ";
  cin >> height;
  cout << "Enter your weight in kilograms: ";
  cin >> weight;
  BMI = weight / (height * height);
  if (gender=='f'||gender=='F')
  {
      if(BMI<18.5){
      cout<<"under weight"<<endl;
     }else if(BMI>18.5&&BMI<24){
      cout<<"normal weight"<<endl;
      }else if(BMI>24&&BMI>30){
      cout<<"over wight"<<endl;
    } else{
    cout<<"obsity"<<endl;
  }
 } else if(gender=='m'||gender=='M'){
  
      if(BMI<20.5){
      cout<<"under weight"<<endl;
      }else if(BMI>20.5&&BMI<25){
      cout<<"normal weight"<<endl;
      }else if(BMI>25&&BMI<30){
      cout<<"over weight"<<endl;
    }}else{
      cout<<"obisity"<<endl;
    }
  }
  return 0;
}