//WAP to swap the value of 2 variable with each other using function
// call by value and call by refrence
#include<iostream>
using namespace std;

void increment_10(int num)  //*num
{
	num=num+10;	//*num=*num+10
	cout<<"Number :"<<num<<endl;  //*num
}
int main(){
	//call by value
	int number;
	cout<<"Enter number :";
	cin>>number;
	increment_10(number);  //&number
	cout<<"After calling number: "<<number;
}
