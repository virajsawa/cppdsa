#include<iostream>
#include<stdio.h>
#include<cstdlib>

using namespace std;

int main(){

int **x;
int num_rows = 5;
int num_cols = 5;
int i,j;

x= new int * [num_rows];

for(i=0; i<num_rows; i++){
x[i]= new int [num_cols];
}

for(i=0; i<num_rows; i++){
for(j=0; j<num_cols; j++){
x[i][j]=rand()%10;
}
}

for(i=0; i<num_rows; i++){
for(j=0; j<num_cols; j++){
cout<<x[i][j]<<"\t";
}
cout<<"\n";
}

int nu_rows, nu_cols;
cout<<"\nEnter the size of new matrix : \nRows - ";
cin>>nu_rows;
cout<<"\nColumns - ";
cin>>nu_cols;

int **y;
y= new int * [nu_rows];

for(i=0; i<nu_rows; i++){
y[i]= new int [nu_cols];
}

for(i=0; i<nu_rows; i++){
for(j=0; j<nu_cols; j++){
if(i<num_rows&&j<num_cols){
y[i][j]=x[i][j];
}
else{ y[i][j]=0;}
}
}

for(i=0; i<nu_rows; i++){
for(j=0; j<nu_cols; j++){
cout<<y[i][j]<<"\t";
}
cout<<"\n";
}

for(i=0; i<num_rows; i++){
delete [] x[i];
}

delete [] x;

return 0;
}
