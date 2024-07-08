#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Array elements in reverse order: ";
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;

    
}
