#include<iostream>
#include<stdio.h>

using namespace std;

int main(){

int n;

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

return 0;
}
