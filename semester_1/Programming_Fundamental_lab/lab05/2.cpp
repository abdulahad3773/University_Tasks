#include<iostream>
using namespace std;
int main(){
int num;
cout<<"enter a 4 digit number"<<endl;
cin>>num;
int num1=(num%10);
int num2=(num/10)%10;
int num3=(num/100)%10;
int num4=(num/1000)%10;
cout<<num1<<num2<<num3<<num4<<endl;
int sum_1_2=num1+num4;
int sum_2_3=num2+num3;
int mul=sum_1_2*sum_2_3;
cout<<sum_1_2<<endl;
cout<<sum_2_3<<endl;
cout<<mul<<endl;

return 0;

}
