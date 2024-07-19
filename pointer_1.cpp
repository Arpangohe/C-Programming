#include<iostream>
using namespace std;
int main(){
	//pointer
	int num;
	cout<<"Enter a number";
	cin>>num;
	double marks = 98.99;
	double *ptr = &marks+num;
	//int *p;  //* Derefrence
	

	cout<<*ptr;
}
