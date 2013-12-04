#include<iostream>
#include<stdio.h>

using namespace std;

void swap(int&, int&);

int main(){

int a, b;

cout<<"Value of a : ";
cin>>a;
cout<<"Value of b : ";
cin>>b;

swap(a,b);

cout<<"New a is : "<<a;
cout<<"\nNew b is : "<<b;
cout<<"\n";

return 0;
}

void swap(int& a, int& b){

int temp;
temp = a;
a = b;
b = temp;

}
