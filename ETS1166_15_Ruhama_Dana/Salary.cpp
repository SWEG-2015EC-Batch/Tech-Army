#include<iostream>
#include<cstring>
using namespace std;
const float pension=0.05;
 const float tax=0.15;

int main(){
  float workhr, brate,bsalary,gsalary,nsalary,bpay;//workhr=weekly working hours, brate=bonus rate per hour, bsalary=base salary, 
//gsalary=gross salary, nsalary=net salary and bpay=bonus payment 
string name; 
  cout<<"please enter your full name:"<<endl;
  cin>>name;
  cout<<"please enter your weekly working hours:"<<endl;
  cin>>workhr;
  cout<<"please enter your base salary:"<<endl;
  cin>>bsalary;
  cout<<"please enter the bonus rate per hour:"<<endl;
  cin>>brate;
  gsalary=(workhr*brate)+bsalary;
  cout<<"The gross salary is:"<<gsalary<<endl;
  nsalary=gsalary-((pension*gsalary)+(tax*gsalary));
  cout<<"the net salary is:"<<nsalary<<endl;
  bpay=brate*workhr;
  cout<<"the bonus payment is:"<<bpay<<endl;
  return 0;
  
