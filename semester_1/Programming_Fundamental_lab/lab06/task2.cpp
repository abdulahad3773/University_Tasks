#include<iostream>
using namespace std;
int main(){
int j_dist,fuel,time,balance;
cout<<"enter journey distance";
cin>>j_dist;
cout<<"enter available fuel";
cin>>fuel;
cout<<"enter traveling time";
cin>>time;
cout<<"enter toll balance";
cin>>balance;
double low_fuel=static_cast<double>(j_dist)/12.0;
double time_delay=static_cast<double>(time)/j_dist;
double r_balance=j_dist/10.0;

if(low_fuel>fuel){
cout<<"low fuel"<<endl;
}

if(time_delay>2){
cout<<"low fuel"<<endl;
}
if (r_balance<balance){
cout<<"recharge too balance";
}



return 0;
}

