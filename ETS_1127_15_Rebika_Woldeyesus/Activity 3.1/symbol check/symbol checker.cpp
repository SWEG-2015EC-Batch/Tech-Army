#include<iostream>
using namespace std;
int main(){
  char unknown;
  cout<<"enter any character:";
  cin>>unknown;
  if(isalpha(unknown)){
    switch (unknown)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case '0':
    case 'U':
        cout << "you entered vowel letter" << endl;
        break;
    default:
        cout << "you entered consonant letter" << endl;
        break;
    }
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
}//exercise number 3