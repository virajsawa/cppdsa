#include<iostream>
#include<stdio.h>
#include<cstdlib>

using namespace std;

int main(){

int new_length,old_length = 10;
int *o = new int;

for(int i=0; i<old_length; i++){
*(o+i)=rand()%10;
}

for(int i=0; i<old_length; i++){
cout<<*(o+i)<<"\t";
} 

cout<<"\n Enter the length of new array : ";
cin>>new_length;

int *n= new int;
int limit=(new_length>old_length)?old_length:new_length;

for(int i=0; i<new_length; i++){
if(i<limit){*(n+i)=*(o+i);}
else{*(n+i)=0;}
}

for(int i=0; i<new_length; i++){
cout<<*(n+i)<<"\t";
}

cout<<"\n";
return 0;
}
