#include<iostream>
#include<stdio.h>

using namespace std; 

template <class T>
int mode(T[], int, T);

int main(){

int bar=3;
float foo=4.2;
int len = 10;
//cout<<"Enter the number : ";
//cin>>number;
int inarr[] = {1,2,3,3,4,5,6,4,5,6};
cout<<mode(inarr, len, bar)<<"\n";
float flarr[] = {4.2, 1.0, 2.3, 4.2, 5.6, 4.5, 4.2, 9.0, 7.1, 4.1};
cout<<mode(flarr, len, foo)<<"\n";

return 0;
}

template <class T>
int mode(T array[], int len, T num){
int counter=0;
for(int i=0;i<len;i++){
if(array[i]==num){counter++;}
}
return counter;
} 
