#include <iostream>
using namespace std;
int main(){
  int a,b,c,R;
  float equ1,equ2,equ3,equ4,equ5,equ6;
  cout<<"enter a b c "<<endl;
  cin>>a;
  cin>>b;
  cin>>c;
  equ1=(a+b);
  equ2=((a*a+c*c)/(static_cast<float>(b+1)));
  equ3=equ2-c/static_cast<float>(a)*b;
  equ4=static_cast<float>(equ1)*equ3;
  equ5=(a%c)-((b+c)*(b+c))/(static_cast<float>(a)+1);
  equ6=static_cast<float>(equ4)+static_cast<float>(equ5);
  
  cout<<equ6;
  return 0;
}
