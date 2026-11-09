#include<iostream>
using namespace std;
int main(){
cout<<"ABDULAHAD_26I0690"<<endl;
char type;
int amount,method,discount;
int per;
cout<<"Enter type of customer R for Regular or V for VIP(R/V )";
cin>>type;
cout<<"Enter Purchase amount in rupees ";
cin>>amount;
cout<<"Enter Payment method: 1 for Cash or 2 for Card(1/2) ";
cin>>method;
if(type=='r'){
  if(amount>=5000){
    if(method==1){
    discount=amount*0.10;
    per=10;
    }else{
    discount=amount*0.08;
    per=8;
    }
  }else{
  discount=amount*0.05;
  per=5;
  }
}else if(type=='v'){
   if(amount>=5000){
    if(method==1){
    discount=amount*0.20;
    per=20;
    }else{
    discount=amount*0.15;
    per=15;
    }
  }else{
  discount=amount*0.10;
  per=10;
  }
}
else cout<<"No Discount "<<endl;
cout<<"Discount percentage is "<<per<<"%"<<endl;
cout<<"Your total amount is "<<amount<<endl;
cout<<"Your discount is "<<discount<<endl;
cout<<"your final amount is "<<amount-discount<<endl;

return 0;
}

