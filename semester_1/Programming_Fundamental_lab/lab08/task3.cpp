#include<iostream>
using namespace std;
int main(){

int pin=2468;
int i=1;
int user_input;
int balance=50000;
int amount;
int correct=0;
while(i<=3){
  cout<<"enter pin ";
  cin>>user_input;
  if(user_input!=pin){
  cout<<"YOU have enter wrong value";
  i++;}
  else{cout<<"log in successfull"<<endl;correct=1;i=4;}
  
  }
if(correct){
  
cout<<"log in successful"<<endl;
cout<<"Enter withdrawal amount: ";
cin>>amount;
 while(amount!=0){
  if(amount>balance){
    cout<<"Insufficient balance"<<endl;
    
  }
  else if(amount%500!=0){
  cout<<"Invalid amount"<<endl;
  
  }
  else{balance-amount;}
  cout<<"Enter withdraw amount";
  cin>>amount;}
  }
  

else cout<<"account block";


return 0;
}
