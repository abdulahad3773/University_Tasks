#include<iostream>
using namespace std;
int main(){
int a[10]={};
int n;
int sumi,count=0;
cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\"<<endl;
cout<<"	Welcome to Alice Secret Scroll Deciper"<<endl;
cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\"<<endl;
cout<<endl;
cout<<"Enter 10 non-negative integers:"<<endl;
for(int i=0;i<10;i++){
cout<<"Enter your "<<i+1<<" number : ";
cin>>n;
a[i]=n;

}
cout<<"The Input Sequence is: ";
for(int i=0;i<10;i++){
cout<<a[i]<<", ";
}cout<<endl;
for(int i=0;i<10;i++){
	sumi=a[i]%10+a[i]/10;
	for(int j=i+1;j<10;j++){
		if(sumi==a[j]%10+a[j]/10) { count++; cout<<"("<<a[i]<<", "<<a[j]<<")"<<endl;}}
}
cout<<"Number of Special Pairs: "<<count;
return 0;
}
