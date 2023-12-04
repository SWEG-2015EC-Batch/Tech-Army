#include <iostream>
#include<cmath>

using namespace std;

int main() {
  char gender;
  double height, weight,bmi;
  cout<<"enter your gender as either m or f"<<endl;
  cin>>gender;
  cout<<"enter your weight in kilogram "<<endl;
  cin>>weight;
  cout<<"enter your height in meter"<<endl;
  cin>>height;
  bmi=weight/(pow(height,2));
  
   if(gender== 'f'||gender=='F'){
     if(bmi<18.5){
       cout<<"you are underweight "<<endl;
     }else if(bmi>=18.5&&bmi<24){
       cout<<"you weight is normal"<<endl;
       
     }else if(bmi>=24&&bmi<30){
       cout<<"you are overweight "<<endl;
     }else{
       cout<<"you are obese"<<endl;
   }
   } else if(gender=='m'||gender=='M'){
     if(bmi<20.5){
       cout<<"you are underweight "<<endl;
       
     }else if(bmi>=25&&bmi<30){
       cout<<"you are overweight"<<endl;
     }else if(bmi>30){
       cout<<"you are obese "<<endl;
     }else if(bmi>=20.5&&bmi<25){
       cout<<"your weight is normal"<<endl;
     }} else{
       cout<<"invalid input"<<endl;}
 
  return 0;} 
