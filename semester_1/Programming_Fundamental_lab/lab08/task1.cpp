#include<iostream>
using namespace std;
int main(){

char choice,exit;
int unit;

exit='y';
while(exit!='m'||exit=='Y'){
cout<<"Enter connection type(D,C,I) ";
cin>>choice;
cout<<"Enter consumed units: ";
cin>>unit;
switch(choice){
case 'd':cout<<"Electricity bill: Rs."<<12*unit+100<<endl;break;
case 'c':cout<<"Electricity bill: Rs."<<18*unit+250<<endl;break;
case 'i':cout<<"Electricity bill: Rs."<<25*unit+500<<endl;break;
default : cout<<"wrong  bill type"<<endl;
}
cout<<"calculate another bill (y/n)";
cin>>exit;

}
cout<<"Program ended";
return 0;
}
