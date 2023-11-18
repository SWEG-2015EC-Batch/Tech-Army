#include<iostream>
using namespace std;
int main()
{
float time_in_seconds, time_in_days;
time_in_seconds=419430400/960;//1 BYTE=1 CHARACTER 
cout<<"the time it takes for the complete transmission of the 400mb file is"<<time_in_seconds<<"second"<<endl;
time_in_days=time_in_seconds/86400;//convert 24 hours into seconds 
cout<<"the time it takes for the complete transmission of the 400mb file is"<<time_in_days<<"days"<<endl;
  
  return 0;
}
