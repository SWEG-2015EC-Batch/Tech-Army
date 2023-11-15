#include<iostream>
#include<cctype>
using namespace std;
int main(){
  char letter;
  cout<<"enter any letter  "<<endl;
  cin>>letter;
  char convert=toupper(letter); 
  char conv=tolower(letter);
  
  if(islower(letter)){
    cout<<"the uppercase equivalent is:"<<convert<<endl;
  }
  else{
    cout<<"the lowercase equivalent is:"<<conv<<endl;
  }
  return 0;
}
