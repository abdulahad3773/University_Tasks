#include<iostream>
using namespace std;
int main(){
cout<<"AbdulAhad_26i0690"<<endl;
int num,n;
int max=0;
cout<<"Enter a number";
cin>>num;
do{n=num%10;
num=num/10;
if (n>max) max=n;}
while(num/10>0);


cout<<"Largest number is "<<max;
return 0;
}
