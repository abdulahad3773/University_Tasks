#include<iostream>
using namespace std;
int main(){
bool motor,gps;
int unit,distance,payload,wind;
cout<<"enter motor status (1/0) ";
cin>>motor;
cout<<"enter GPS status (1/0) ";
cin>>gps;
cout<<"enter available battery units";
cin>>unit;
cout<<"enter travel distance";
cin>>distance;
cout<<"enter payload weight";
cin>>payload;
cout<<"enter wind speed ";
cin>>wind;
int req_battery=(2*distance)+(3*payload);
if(motor){
  if(gps){
    if(payload<=5){
      if(wind<=25){
        if(unit>=(1.05*req_battery)){
        cout<<"Flight Permitted"<<endl;
        }
      }
    }
  }
}
return 0;
}
