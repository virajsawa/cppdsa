#include<iostream>
#include<stdio.h>

using namespace std;

template <class T>
void make2dArray(T **x, int numRows, int rowSize[]){

x = new T * [numRows];

for(int i=0; i<numRows; i++){
x[i]= new int [rowSize[i]];
}

cout<<x[1][2];

}

int main(){
int **k;
int rowsize[]={4,3,2,5};
make2dArray(k,4,rowsize);
/*int n;

cout<<"Enter the size of array :";
cin>>n;

int *x = new int [n];
int i;
for(i=0;i<n;i++){
x[i]=i+1;
}

cout<<"\nEnter the number of element do you wish to see : ";
cin>>i;
cout<<"Number is : "<<x[i-1]<<"\n";
cout<<"And address is : "<<&x[i]<<"\n";
*/



return 0;
}
