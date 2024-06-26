//Check upper and lower
#include<iostream>
using namespace std;


int main(){
	char ch;
	cout<<"enter any character A-Z a-z :";
	cin>>ch;  //i
	
	if(ch>='A' && ch<='Z'){
		cout<<"uppercase letter";
	}
  else	if(ch>='a' && ch<='z'){
		cout<<"lowercase letter";
	}
}
