#include<iostream>
using namespace std; 
int main(){
	int num, temp,store=1, reverse1,reverse2,counter=0;
	cout<<"enter a number"<<endl;
	cin>>num;
	reverse1=0;
	reverse2=0;
	temp=num%10;

	while(num>0){
		temp=num%10;
		if(temp%2==0){
		store=temp*store;
		}
	    reverse2=reverse2+temp;
		reverse1=(reverse1*10)+temp;
		num=num/10;
		
		counter ++;
	    
	
	}
	cout<<"the reverse of the number is:"<<reverse1<<endl;
	cout<<"the sum of the digits is:"<<reverse2<<endl;
	cout<<"the number of digits is:"<<counter<<"\n";
	cout<<"multiplication is"<<store<<endl;
	return 0;
}

