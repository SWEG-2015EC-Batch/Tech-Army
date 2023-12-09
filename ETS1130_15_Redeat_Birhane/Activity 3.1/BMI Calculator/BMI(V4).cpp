
#include <iostream>
using namespace std;
//this is a code to calculate BMI for n number of people
int main() {
    float height, weight, BMI,num;
    char g;
   int i=0;
   cout<<"enter the number of people you want to check"<<endl;
    cin>>num;
    for(int i=0;i<=num;i+=1){
    cout<<" the value of i is "<<i<<endl;
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
    }
 

     return 0;
}
