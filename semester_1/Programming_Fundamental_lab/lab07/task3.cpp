#include<iostream>
using namespace std;
int main(){
cout<<"ABDULAHAD_26I0690"<<endl;
char gen;
bool member;
int age;
cout<<"Enter M for male and F for female (M/F) ";
cin>>gen;
cout<<"Enter 1 is member 0 is non member(0/1) ";
cin>>member;
cout<<"Enter your age";
cin>>age;
(gen=='m')? cout<<"Male ,":cout<<"Female ,";
(member)? cout<<"Member ,":cout<<"Non-Member ,";
(age>=18)? cout<<"adult ":cout<<"Minor ";

return 0;
}

