#include<iostream>
using namespace std;
int counte=0;
int counto=0;
void countEvenOdd(int n){
int num;

int a[10]={};
for(int i=0;i<10;i++){
  cout<<"enter your "<<i+1<<" number: ";
  cin>>num;
  if(n){
    if(num%2==0) counte++;
  }else{if(num%2==1) counto++;}
  a[i]=num;
}


}





int main(){
int n;
cout<<"What would you like to count?\n1. Even\n2. odd"<<endl;
cout<<"Enter your choice: ";
cin>>n;
countEvenOdd(n);
if(n) cout<<"even number: "<<counte;
else cout<<"odd number: "<<counto;





return 0;
}
