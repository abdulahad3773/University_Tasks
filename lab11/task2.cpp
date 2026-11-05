#include<iostream>
using namespace std;
int main(){
cout<<"Enter 20 integers: "<<endl;
int a[20]={};
int largest=0;
int slargest=0;
int smaller=0;
int n;
for(int i=0;i<20;i++){
  cout<<"Enter your "<<i+1<<" number: ";
  cin>>n;
  a[i]=n;
  if(n>=largest) {slargest=largest;largest=n;}
  else smaller = n;
  
}
cout<<"second largest: "<<slargest;

return 0;
}
