#include<iostream>
using namespace std;
int main(){
  float mark,sum=0,average,N;
  char grade,grade2;
  int choice;
  cout<<"for how many students do you want to calculate?"<<endl;
  cin>>N;
  for(int i=1;i<=N;i++){
    cout<<"enter the assesemnt of student #"<<i<<endl;
  for(int j=0;j<5;j++){
    cout<<"choose assesement\n 1.Test(15%)\n 2.Quiz(5%)\n 3.project(20%)\n 4.assignment(10%)\n5.final exam(50%)"<<endl;
    cin>>choice;
    if(choice==1){
    cout<<"enter mark:";
    cin>>mark;
    if(mark<0||mark>15){
      cout<<"invalid input. Enter again"<<endl;
      cin>>mark;
    }
    }else if(choice==2){
    cout<<"enter mark:";
    cin>>mark;
    if(mark<0||mark>5){
      cout<<"invalid input. Enter again"<<endl;
      cin>>mark;
    }
    }else if(choice==3){
      cout<<"enter mark:";
    cin>>mark;
    if(mark<0||mark>20){
      cout<<"invalid input. Enter again"<<endl;
      cin>>mark;
    }
    }else if(choice==4){
      cout<<"enter mark:";
    cin>>mark;
    if(mark<0||mark>10){
      cout<<"invalid input. Enter again"<<endl;
      cin>>mark;
    }
    }else if(choice==5){
      cout<<"enter mark:";
    cin>>mark;
    if(mark<0||mark>50){
      cout<<"invalid input. Enter again"<<endl;
      cin>>mark;
    }
    }
    
    
    sum+=mark;
  }
  
  if(sum>=90){
    grade='A+';
    cout<<"student"<<i<<"grade is:"<<grade<<endl;
  }else if(sum>=80&&sum<90){
    grade='A';
    cout<<"student"<<i<<"grade is:"<<grade<<endl;
  }else if(sum>=75&&sum<80){
    grade='B';
    grade2='+';
    cout<<"student"<<i<<"grade is:"<<grade<<grade2<<endl;
  }else if(sum>=60&&sum<75){
    grade='B';
    cout<<"student"<<i<<"grade is:"<<grade<<endl;
  }else if(sum>=55&&sum<60){
    grade='C';
    grade2='+';
    cout<<"student"<<i<<"grade is:"<<grade<<grade2<<endl;
  }else if(sum>=45&&sum<55){
    grade='C';
    cout<<"student"<<i<<"grade is:"<<grade<<endl;
  }else if(sum>=30&&sum<45){
    grade='D';
    cout<<"student"<<i<<"grade is:"<<grade<<endl;
  }else if(sum<30){
    grade='F';
    cout<<"student"<<i<<"grade is:"<<grade<<endl;
  }
  
  }
  
  
  return 0;

}
