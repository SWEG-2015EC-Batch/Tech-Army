#include<iostream>
#include<cmath>
using namespace std;
int main(){
  double weight,height,bmi;
  char gender;
  int num;
  cout<<"enter the number of people you want to calculate bmi for"<<endl;
  cin>>num;
  for(int x=1;x<=num;++x){
cout<<"enter your gender as either m or f"<<endl;
  cin>>gender;
  cout<<"enter your weight in kilogram "<<endl;
  cin>>weight;
  cout<<"enter your height in meter"<<endl;
  cin>>height;
  bmi=weight/(pow(height,2));
  
   if(gender== 'f'||gender=='F'){
     if(bmi<18.5){
       cout<<"person #"<<x<<"you are underweight "<<endl;
     }else if(bmi>=18.5&&bmi<24){
       cout<<"person"<<x<<"you weight is normal"<<endl;
       
     }else if(bmi>=24&&bmi<30){
       cout<<"person"<<x<<"you are overweight "<<endl;
     }else{
       cout<<"person"<<x<<"you are obese"<<endl;
   }
   } else if(gender=='m'||gender=='M'){
     if(bmi<20.5){
       cout<<"person"<<x<<"you are underweight "<<endl;
       
     }else if(bmi>=25&&bmi<30){
       cout<<"person"<<x<<"you are overweight"<<endl;
     }else if(bmi>30){
       cout<<"person"<<x<<"you are obese "<<endl;
     }else if(bmi>=20.5&&bmi<25){
       cout<<"person"<<x<<"your weight is normal"<<endl;
     }} else{
       cout<<"invalid input"<<endl;}
  } 
return 0;
  
  
