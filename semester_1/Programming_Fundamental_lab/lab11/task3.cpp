#include<iostream>
using namespace std;
int main(){
int n,numch;
int cup=0,cl=0,ca=0,ce=0,ci=0,co=0,cu=0;
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
  cup++;
    if(numch==65)ca++;
    else if(numch==69)ce++;
    else if(numch==73)ci++;
    else if(numch==79)co++;
    else if(numch==85)cu++;
  
  }else{
  cl++;
    if(numch==97)ca++;
    else if(numch==101)ce++;
    else if(numch==105)ci++;
    else if(numch==111)co++;
    else if(numch==117)cu++;
  
  }



}
cout<<endl;
cout<<"Uppercase letter :"<<cup<<endl;
cout<<"lowercase letter :"<<cl<<endl;
cout<<endl;
cout<<endl;
cout<<"Vowel frequency: "<<endl;
cout<<"a: "<<ca++<<endl;
cout<<"e: "<<ce++<<endl;
cout<<"i: "<<ci++<<endl;
cout<<"o: "<<co++<<endl;
cout<<"u: "<<cu++<<endl;
a[0]=static_cast<char>(a[0]-32);
cout<<"capitalized Sentence:";
for(int i=0;i<n;i++){
cout<<a[i];
}
return 0;
}



