//Write a program to calculate the square root of a valid nukmber
#include<iostream>
#include<cmath>
using namespace std;

int main(){
	double num, root;
	
	cout<<"Enter a number :";
	cin>>num;
	
	if(num<0){
		cout<<"Error: Square root is not available for negative number";
	}
	else{
		root = sqrt(num);
		cout<<"square root of "<<num<<" = "<< root;
	}
}
