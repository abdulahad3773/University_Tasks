#include<iostream>
using namespace std;
int main(){

int n;
int row=0;
int col=0;
cout<<"enter n: ";
cin>>n;
for(int i=0;i<n*n;i++){
   if(row>=col){
   cout<<"* ";col++;
   }else{cout<<"# ";col++;}
   if(col==5){
   cout<<endl;
   row++;col=0;
   }

}
return 0;
}
