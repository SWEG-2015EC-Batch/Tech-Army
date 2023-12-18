Ruhama Sec18, [12/18/2023 11:32 AM]
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

Yadiel, [12/18/2023 11:32 AM]
#include<iostream>
using namespace std;
int main()
{
 int test , quiz , project, assignment , finalexam , total;
 cout<<"enter your test mark from 15%: ";
 cin>>test;
 cout<<"enter your quiz mark from 5%: ";
 cin>>quiz;
 cout<<"enter your project mark from 20%: ";
 cin>>project;
 cout<<"enter your assignment mark from 10%: ";
 cin>>assignment;
 cout<<"enter your final exam mark from 50%: ";
 cin>>finalexam;
 
    total = test + quiz + project + assignment + finalexam;
    if((total<0)||(total>100))
    {
        cout<<"invald input";
        
    }
    else
    {
    cout<<"your total mark is "<<total;

    }
    
if (total>=90)
{
    cout<<"your grade is A+";
}
else if (total>=80)
{
    cout<<"your grade is A";
}
else if (total>=75)
{
    cout<<"your grade is B+";
}

else if (total>=60)
{
    cout<<"your grade is B";
}

else if (total>=55)
{
    cout<<"your grade is C+";
}

else if (total>=45)
{
    cout<<"your grade is C";
}

else if (total>=30)
{
    cout<<"your grade is D";
}
else if (total<30)
{
    cout<<"your grade is F";
}
else
{
  cout<<"unknown grade";
  
}


return 0;

}
