//nesting
#include<iostream>
using namespace std;
int main(){
	int per;
	cout<<"Enter your percent :";
	cin>>per;
	if(per>=0 && per<=100)
	{
		if(per>=0 && per<=33)
		{
			cout<<"You are fail";
		}
		if(per>=34 && per<=45)
		{
			cout<<"You got 3rd division";
		}
		if(per>=46 && per<=60)
		{
			cout<<"You Got 2nd Division";
		}
		if(per>=61 && per<=85)
		{
			cout<<"You Got A division";
		}
		if(per>=86 && per<=100)
		{
			cout<<"You Got A+ divison";
		}
	}
	else
	{
		cout<<"Invalid Input";
	}
}
