#include<iostream>
using namespace std;
int main(){

int c_water,water_enter,water_leaving,op_time,t_capacity;
cout<<"c_water,water_enter,water_leaving,op_time,t_capacity"<<endl;
cin>>c_water>>water_enter>>water_leaving>>op_time>>t_capacity;

int net_change=water_enter-water_leaving;
int result=net_change*op_time;
int water_level=result+c_water;
cout<<"expected water level="<<water_level<<endl;
if(water_level>t_capacity){
      cout<<"overflow warning"<<endl;
      cout<<"amount of excess water."<<water_level-t_capacity ; 
    }

return 0;
}
