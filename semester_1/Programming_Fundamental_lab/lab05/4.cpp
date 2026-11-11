#include <iostream>
#include<iomanip>
using namespace std;
int main(){
	char f_ch;
	char s_ch;
	int f_num;
	int s_num;
	cout<<"enter first character second character first number second number number"<<endl; 
	cin>>f_ch>>s_ch>>f_num>>s_num;
	cout<<setw(7)<<f_ch<<endl;
	cout<<setw(5)<<f_ch<<" "<<f_num<<" "<<f_ch<<endl;
	cout<<setw(3)<<f_ch<<" "<<f_num<<" "<<s_ch<<" "<<f_num<<" "<<f_ch<<endl;
	cout<<setw(1)<<f_ch<<" "<<f_num<<" "<<s_ch<<" "<<s_num<<" "<<s_ch<<" "<<f_num<<" "<<f_ch<<endl;
	cout<<setw(3)<<f_ch<<" "<<f_num<<" "<<s_ch<<" "<<f_num<<" "<<f_ch<<endl;
	cout<<setw(5)<<f_ch<<" "<<f_num<<" "<<f_ch<<endl;
	cout<<setw(7)<<f_ch<<endl;

  return 0;
}
