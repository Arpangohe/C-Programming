//Q.1) WAP to create an array of n integer elements. And perform the following operations.
//a) display
#include<iostream>
using namespace std;

int main(){
	int number;
	cout<<"Enter the number of elements";
	cin>>number;
	
	int arr[number];
	cout<<"Enter the elements :";
	for(int i = 0; i <= number; i++){
	cin>>arr[i];
	}
	cout<<"The elementd are :";
	for(int i=0;i<=number;i++)
	{
		cout<<arr[i]<<" ";
	}
}
