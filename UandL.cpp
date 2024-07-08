#include <iostream>
using namespace std;


int main() {
    char choice;
    cout << "Enter 'U' for upper case letters or 'L' for lower case letters: ";
     cin >> choice;

    if (choice == 'U' || choice == 'u') {
         cout << "Upper case letters: ";
        for (char c = 'A'; c <= 'Z'; c++) {
             cout << c << " ";
        }
         cout <<  endl;
    } else if (choice == 'L' || choice == 'l') {
         cout << "Lower case letters: ";
        for (char c = 'a'; c <= 'z'; c++) {
             cout << c << " ";
        }
         cout <<  endl;
    } else {
         cout << "No match" <<  endl;
    }

}
