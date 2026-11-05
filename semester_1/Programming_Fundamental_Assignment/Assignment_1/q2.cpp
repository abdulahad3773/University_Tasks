#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
double U,ts,D;
int roll;

cout<<"Enter wind speed in km/h: ";
cin>>U;
cout<<"Enter terrain slope angle in radians: ";
cin>>ts;
cout<<"Enter vegetation fuel dryness index: ";
cin>>D;
cout<<"Enter last 4 digits of roll number: ";
cin>>roll;

// Part A
double w0=0.8,b=0.12,u0=15.0,m=3.4,D0=0.5;
double st=sin(ts);
double v=(w0*exp(b*U))+(u0*st*st)+(m*(log((D+1.0)/D0)))+sqrt(U*cos(ts)+1.0);

// Part B
long long v_int=static_cast<long long>(v);
double v_decimal=v-static_cast<double>(v_int);
int f1=static_cast<int>(v_decimal*100.0);
int f2=static_cast<int>(v_decimal*10000.0)%100;
int R=(roll%89)+10;
long long K=(v_int*1000000LL)+(f1*10000LL)+(f2*100LL)+R;

// Part C
int retrive=K%100;
char c1=static_cast<char>('A'+(v_int%26));
char c2=static_cast<char>('Z'-(retrive%26));
float vf=static_cast<float>(v_int)+(static_cast<float>(f1)/100.0f)+(static_cast<float>(f2)/10000.0f);
double vd=static_cast<double>(v_int)+(static_cast<double>(f1)/100.0)+(static_cast<double>(f2)/10000.0);
int check=(vf==vd);
int penelty=(!check)*25;
int Threat=retrive+penelty+static_cast<int>(1.5*vd);

cout<<fixed<<setprecision(4);
cout<<"AV: "<<v<<endl;
cout<<"Telemetry Key K: "<<K<<endl;
cout<<"Status Tag: "<<c1<<c2<<endl;
cout<<"Precision Match Flag: "<<check<<endl;
cout<<"Threat Rating: "<<Threat<<endl;

return 0;
}

