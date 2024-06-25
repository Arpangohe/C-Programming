#include<iostream>
using namespace std;

int main(){
    int marksStudent[8]={34,56,12,34,56,7,89,11};
    int high, SecoundHighest;
    if(marksStudent[0]>marksStudent[1]){
        high=marksStudent[0];
        SecoundHighest=marksStudent[1];
    }
    else{
        high=marksStudent[1];
        SecoundHighest=marksStudent[0];
    }
    for(int i =2; i < 8; i++)
    {
        if(marksStudent[i]>high)
        {
            SecoundHighest = high;
            high=marksStudent[i];
        }
        else if(marksStudent[i]>SecoundHighest && marksStudent[i]<high){
            SecoundHighest=marksStudent[i];
        }
    }
    cout << "Highest marks: " << high << endl;
    cout << "Second highest marks: " << SecoundHighest << endl;
}
