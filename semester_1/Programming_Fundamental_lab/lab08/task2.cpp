#include<iostream>
using namespace std;
int main(){

int num,start,end;
cout<<"Enter number: ";
cin>>num;
cout<<"Enter starting number: ";
cin>>start;
cout<<"Enter ending number: ";
cin>>end;
for(int i=start;i<=end;i++){
cout<<num<<" x "<< i <<" = "<<num*i<<endl;
}


return 0;
}
