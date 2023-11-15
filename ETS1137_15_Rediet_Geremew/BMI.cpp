#include <iostream>
using namespace std;
//this is a code to calculate BMI
int main() {
    float height, weight, BMI;
    cout << "Enter your height in meters: ";
    cin >> height;
    cout << "Enter your weight in kilograms: ";
    cin >> weight;
    BMI = weight / (height * height);
     cout << "Your Body Mass Index (BMI) is: " << BMI << endl;

   return 0;
}
