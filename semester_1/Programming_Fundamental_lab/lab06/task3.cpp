#include<iostream>
using namespace std;
int main(){
int c_item,d_item,time;
bool over_ride,block;
cout<<"enter completed item ";
cin>>c_item;
cout<<"enter defective item ";
cin>>d_item;
cout<<"enter operating time";
cin>>time;
cout<<"manual override status(1/0) ";
cin>>over_ride;
cout<<"machine-blocked status (1/0)";
cin>>block;
if (!block && ((time!=0 && c_item!=0) && (c_item/time >=5)&&(d_item<=(c_item*0.10)))||(over_ride && c_item>=100))
{
cout<<"batch approved"<<endl;


}
return 0;
}

