#include<iostream>
using namespace std;
int main(){
int num;
cout<<"enter currency "<<endl;
cin>>num;
int num_1000=num/1000;
int num_100=(num/100)%10;
int num10=(num/10)%10;
int num_50=(num10/5);
int num_20=(num10%5)/2;
int num_1=(num10%5)-(num_20/2;
cout<<num_1000<<endl;
cout<<num_100<<endl;
cout<<num10<<endl;
cout<<num_50<<endl;
cout<<num_20<<endl;
cout<<num_1<<endl;
return 0;

}
