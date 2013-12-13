#include<iostream>
#include<stdio.h>

using namespace std;

int * func(int *a, int *b);

int main(){

int ary[5]={1,2,3,4,5};
int *number= new int (10);
//number = new int;
//*number = 10;

cout<<"\n*number = "<<*number;
cout<<"\nnumber = "<<number;

int *p;
p=func(number,ary);

cout<<"\nBack into the main function : ";
cout<<"\np = "<<p;
cout<<"\np[0] = "<<p[0];
cout<<"\n*p = "<<*p;

return 0;
}

int * func(int *a, int *b){

cout<<"\n*a = "<<*a;
cout<<"\na ="<<a;
cout<<"\n*b = "<<*b;
cout<<"\nb = "<<b;
cout<<"\nb[0] = "<<b[0];
cout<<"\n*b[0] = gave error";
cout<<"\n*(b+0) = "<<*(b+0);

return b;
}
