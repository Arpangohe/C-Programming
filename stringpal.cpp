#include<iostream>
#include<string>
using namespace std;

string isPalindrome(int num) {
    int originalNum = num;
    int reversedNum = 0;
    while(num!= 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }
    if(originalNum == reversedNum) {
        return "Yes";
    } else {
        return "No";
    }
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    string result = isPalindrome(num);
    cout << "Is " << num << " a palindrome number? " << result << endl;
    return 0;
}
