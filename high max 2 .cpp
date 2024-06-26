#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter number :";
    cin>>num;
    int high = -1; // Initialize high to -1, not INT_MAX
    while(num!= 0) {
        int digit = num % 10; // Get the last digit
        if(digit > high) {
            high = digit; // Update high if digit is greater
        }
        num /= 10; // Remove the last digit
    }
    cout<<"Highest digit is : "<<high<<endl;
    return 0;
}
