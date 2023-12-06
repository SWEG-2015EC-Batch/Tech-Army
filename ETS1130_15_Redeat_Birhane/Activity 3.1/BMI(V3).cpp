#include <iostream>
using namespace std;
//this is a code to calculate BMI based on your gender
int main() {
    float height, weight, BMI;
    char g;
    cout<<"Enter your gender:"<<endl;
    cin>>g;
    cout << "Enter your height in meters: "<<endl;
    cin >> height;
    cout << "Enter your weight in kilograms: "<<endl;
    cin >> weight;
    BMI = weight / (height * height);
    if(BMI>=30){
      cout<<"you're obese"<<endl;
    }
    if(g=='F'||g=='f'){
      if(BMI>=18.5&&BMI<24){
        cout<<"you're normal weight"<<endl;
      }
      else if(BMI>=24&&BMI<30){
        cout<<"you're over weight"<<endl;
      }
      else if(BMI<18.5){
        cout<<"you're under weight"<<endl;
      }
    }
   if(g=='M'||g=='m'){
    if(BMI>=20.5&&BMI<25){
      cout<<"you're normal weight"<<endl;
    }
    else if(BMI>=25&&BMI<30){
      cout<<"you're over weight"<<endl;
    }
    else if(BMI<20.5){
      cout<<"you're under weight"<<endl;
    }
}
     return 0;
   }
  
    
 

     
