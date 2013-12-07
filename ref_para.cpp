#include<iostream>
#include<stdio.h>

using namespace std; 

template<class T>
void abc(T& a, T& b){
a = a + b;
}

int main(){

int x = 2;
int y = 3;

abc(x,y);

cout<<x;

cout<<"\n";
return 0;
}
