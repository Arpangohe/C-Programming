#include<iostream>
using namespace std;

int main(){
    string names[3]={"apple is not Pineapple"};
    for(int i =0;i<3;i++){
        for(int j = 0; j < names[i].length(); j++){
            names[i][j] = toupper(names[i][j]);
        }
    }
    for(int i=0;i<3;i++) {
        cout<<names[i]<<" ";
    }
}

