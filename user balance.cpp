#include<iostream>
using namespace std;

int main(){
	double balance;
	cout<<"Enter initial Balance :";
	cin>>balance;
	
	while(true){
		cout<<"Your Current Balance :"<<balance<<endl;
		cout<<"1. Deposit\n2.Withdrawl\n ";
		
		int choice;
		cout<<"Enter Your Choice :";
		cin>>choice;
		
		if(choice==1){
			double deposit;
			cout<<"Enter amount you want to Deposit :";
			cin>>deposit;
			balance +=deposit;
		}
		else if(choice==2){
			double withdrawl;
			cout<<"Enter amount you want to Withdrawl :";
			cin>>withdrawl;
			if(withdrawl>balance){
				cout<<"Insufficiant balance. Transaction Failed.\n";
			}
			else{
				balance-=withdrawl;
			}
		}
		else{
			cout<<"Invalid choice. Please try again.\n";
		}
		if(balance <=100){
			cout<<"Your Balance is zero or smaller. Transaction Terminated.\n";
			break;
		}
	}
}
