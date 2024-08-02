//WAP Given an array named data ,
//    data[3][3]=  1         1         2
//                          5         6         7
//                          5         5         5 
//
//Addition of all  elements ->37

#include<iostream>
using namespace std;

int main(){
	int array[3][3]={{1,1,2},{5,6,7},{5,5,5}};
	
	int sum = 0;
	
	for(int i = 0; i<3;i++)
	{
		for(int j =0; j<3; j++)
		{
			sum +=array[i][j];
		}
	}
	cout<<"The sum of the array data is :"<<sum;
}

