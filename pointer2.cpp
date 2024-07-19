#include<iostream>
using namespace std;
int main(){
	int num1=89;
	int *p=&num1;
	cout<<"value of num1 :"<<*p<<endl;//if you want to get value  then use *operator;
	cout<<"address of num1 :"<<p;//if you want to get address then only you have to write the pointer variable name
	
}

