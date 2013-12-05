#include<iostream>
#include<stdio.h>

using namespace std;

int abc(int, int, int);

int main(){

try{cout<<abc(0,0,0)<<"\n";}
catch(int e){
if(e==1){cout<<"All numbers are negative. This should not happen\n";}
else if(e==2){cout<<"All numbers are zero. This should not happen\n";}
}

return 0;
}

int abc(int a, int b, int c){
if(a<0&&b<0&&c<0){throw 1;}
else if(a==0&&b==0&&c==0){throw 2;}
return a+b*c;
}

