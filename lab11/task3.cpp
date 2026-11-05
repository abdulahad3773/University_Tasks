#include<iostream>
using namespace std;
int main(){
int n,numch;
int countup=0,countl=0,counta=0,counte=0,counti=0,counto=0,countu=0;
char ch;
cout<<"Enter number of character you want to enter"<<endl;
cin>>n;
char a[n]={};
cout<<"Enter the character 1 by 1 ";
for(int i=0;i<n;i++){
  cout<<"enter the character "<<i+1;
  cin>>ch;
  a[i]=ch;
  numch=static_cast<int>(ch);
  if(numch>=65 && numch<=90) {
  countup++;
    if(numch==65)counta++;
    else if(numch==69)counte++;
    else if(numch==73)counti++;
    else if(numch==79)counto++;
    else if(numch==85)countu++;
  
  }else{
  countl++;
    if(numch==97)counta++;
    else if(numch==101)counte++;
    else if(numch==105)counti++;
    else if(numch==111)counto++;
    else if(numch==117)countu++;
  
  }



}
cout<<endl;
cout<<"Uppercase letter :"<<countup<<endl;
cout<<"lowercase letter :"<<countl<<endl;
cout<<endl;
cout<<endl;
cout<<"Vowel frequency: "<<endl;
cout<<"a: "<<counta++<<endl;
cout<<"e: "<<counte++<<endl;
cout<<"i: "<<counti++<<endl;
cout<<"o: "<<counto++<<endl;
cout<<"u: "<<countu++<<endl;
a[0]=static_cast<char>(a[0]-32);
cout<<"capitalized Sentence:";
for(int i=0;i<n;i++){
cout<<a[i];
}
return 0;
}



