//BMI calculator 
#include <iostream>
#include <string>
using namespace std;

int main() {
  float num1, num2, bmi;
  string weight, height;

  cout << "Enter height in either feet or meter: ";
  cin >> num1;
  cout << "Did you enter your height in feet or meter? ";
  cin >> height;
  cout << "Enter weight in either pound or kilogram: ";
  cin >> num2;
  cout << "Did you enter your weight in kilograms or pounds? ";
  cin >> weight;

  if (height == "feet" && weight == "pounds") {
    bmi = (num2 * 0.4535) / ((num1 * 0.3048) * (num1 * 0.3048));//changing feet to meter and pound to kilogram
    cout << "Your BMI is " << bmi << endl;
  } else if (height == "meter" && weight == "kilogram") {
    bmi = num2 / (num1 * num1);
    cout << "Your BMI is " << bmi << endl;
  } else if(height=="feet"&&weight=="kilogram"){
    bmi=num2/((num1 * 0.3048) * (num1 * 0.3048));
    cout<<"your BMI is"<<bmi<<endl;
  }
  else {
    cout << "Invalid input for height or weight units." << endl;
  }

  return 0;
}
