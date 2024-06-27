
#include<iostream> // header file in CPP
using namespace std; 

int main(){ 
	int number, i;
	
	cout<<"Enter a Number :"; //user input number
	cin>>number;
	
	if(number<=1){ //n if number is less or equal then 1 is not prime
		cout<<number<<" is not a prime number ";
	}
	else{
		for(i = 2; i <= number/2;i++){
			if(number % i == 0){   // is not prime 
				cout<<number<<" is not a prime number :";
			}
		}
		cout<<number<<" is a prime number ";   // is a prime number 
	}
	
}
