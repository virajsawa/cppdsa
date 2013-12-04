#include<iostream>
#include<stdio.h>

using namespace std; 

template <class T>
int mode(int[], int, T);

int main(){

int bar=3;
float foo=3.2;
int len = 10;
//cout<<"Enter the number : ";
//cin>>number;
int inarr[] = {1,2,3,3,4,5,6,4,5,6};
cout<<mode(inarr, len, bar)<<"\n";
cout<<mode(inarr, len, foo)<<"\n";

return 0;
}

template <class T>
int mode(int array[], int len, T num){
int counter=0;
for(int i=0;i<len;i++){
if(array[i]==((int)num)){counter++;}
}
return counter;
} 
