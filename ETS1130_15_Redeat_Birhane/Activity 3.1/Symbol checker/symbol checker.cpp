#include<iostream>
using namespace std;
//this is a code to check the type of an entered symbol
int main(){
  char unknown;
  cout<<"enter any character:";
  cin>>unknown;
  if(isalpha(unknown)){
    if(isupper(unknown)){
      cout<<"you entered alphabet in upper case"<<endl;
    }else if(islower(unknown)){
      cout<<"you entered an alpahabet in lowercase"<<endl;
    }
  } else if(isdigit(unknown)){
    cout<<"you entered a digit"<<endl;
    if(unknown%2==0){
      cout<<"you entered an even number"<<endl;
      
    }else{
      cout<<"you entered an odd number"<<endl;
    }
    
  }else{
    cout<<"you entered a special character"<<endl;
  }
}
