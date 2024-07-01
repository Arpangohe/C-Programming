//program to give 10% discount if the amount is 1000 or more

#include <iostream>
using namespace std;

int main() {
    int quantity;
    const int unitCost = 100;
    double totalCost;

    // Ask the user for the quantity
    cout << "Enter the quantity of items you want to purchase: "<<endl;
    cin >> quantity;

    totalCost = quantity * unitCost;

     
    if (totalCost >= 1000) {
        totalCost *= 0.9; // 10% discount  //applyed when the amount is 1000 or over 1000
    }

    cout << "The total cost is: " << totalCost <<endl;

}

