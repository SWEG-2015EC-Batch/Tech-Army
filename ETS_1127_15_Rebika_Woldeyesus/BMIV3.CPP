#include <iostream>
using namespace std;
//this is a code to calculate BMI
int
main ()
{
  float height, weight, BMI;
  char f,F,m,M;
  char gender;
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
      cout<<"you are under weight"<<endl;
     }else if(BMI>18.5&&BMI<24){
      cout<<"you are normal weight"<<endl;
      }else if(BMI>24&&BMI>30){
      cout<<"you are over wight"<<endl;
    } else{
    cout<<"you are obsity"<<endl;
  }
 } else if(gender=='m'||gender=='M'){
  
      if(BMI<20.5){
      cout<<"you are under weight"<<endl;
      }else if(BMI>20.5&&BMI<25){
      cout<<"you are normal weight"<<endl;
      }else if(BMI>25&&BMI<30){
      cout<<"you are over weight"<<endl;
    }}else{
      cout<<"you are obisity"<<endl;
    }
  return 0;
}