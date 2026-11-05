#include<iostream>
using namespace std;
void devisor(int a, int b){
int count=0;
for(int i=a;i<=b;i++){
  int countd=0;
  for(int j=1;j<=i;j++){
    if(i%j==0) {countd++;}}
    	if(countd==4){
      	cout<<"Numbers with exactly four divisor " <<i<<endl;
      	count++;
    
    }
  
}
cout<<"Total numbers found: "<<count;  
}
int main(){
int a,b;
cout<<"Enter starting number: ";
cin>>a;
cout<<"Enter starting number: ";
cin>>b;
devisor(a,b);


}
