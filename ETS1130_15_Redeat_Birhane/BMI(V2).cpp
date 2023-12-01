#include <iostream>
using namespace std;
//this is a code to calculate BMI and display your gender
int main() {
    float height, weight, BMI;
    string g;
    
    cout<<"Enter your gender:"<<endl;
    cin>>g;
    cout << "Enter your height in meters: "<<endl;
    cin >> height;
    cout << "Enter your weight in kilograms: "<<endl;
    cin >> weight;
    BMI = weight / (height * height);
    cout<<"you're "<<g<<" with "<<BMI<<" BMI "<<endl;
   
     return 0;
}


