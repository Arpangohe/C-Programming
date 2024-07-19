#include<iostream>
using namespace std;
int main(){
	//pointer
	int num;
	cout<<"Enter a number";
	cin>>num;
	double marks = 98.99+num;
	double *ptr = &marks;
	//int *p;  //* Derefrence
	

	cout<<*ptr;
}
