#include<iostream>
using namespace std;
int fact(int n){
int p=1;
for (int i=1;i<=n;i++){
 p=p*i;
 }
return p;
}
int add(int a,int b,int c){
return (fact(a)+fact(b)+fact(c));


}
int main(){
int n;
cout<<"Enter Number ";
cin>>n;
int z=n;
int a,b,c;
a=n%10;n=n/10;
b=n%10;n=n/10;
c=n;
if(add(a,b,c)==z)cout<<"strong";

return 0;
}
