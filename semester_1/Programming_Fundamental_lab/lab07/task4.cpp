#include<iostream>
using namespace std;
int main(){
cout<<"ABDULAHAD_26I-0690"<<endl;
int choice,fee,finalfee,hour,year,age,fprice;
int price=500;
char course;
cout<<"1. Calculate Student Fee"<<endl;
cout<<"2. Check Faculty Bonus"<<endl;
cout<<"3. Calculate Event Ticket Price"<<endl;
cout<<"4. Exit"<<endl;
cout<<"Enter your choice (1-4) ";
cin>>choice;
if(choice==1){
cout<<"Enter course type Enter U for Undergraduate Enter P for Postgraduate(u/p) ";
cin>>course;
cout<<"Enter the number of credit hours";
cin>>hour;
  if(course=='u'){
  fee=2000*hour; 
  }else{
  fee=3000*hour;
  }
  if(hour>20){
  finalfee=fee*0.1;
  cout<<"final fee "<<fee-finalfee;
  }else cout<<"final fee "<< fee;
}
else if(choice==2){
cout<<"Enter the year of service ";
cin>>year;
  if(year>=5){
  cout<<"you are eligible for bonus"<<endl;
  }else{cout<<"not eligible"<<endl;}
}
else if(choice==3){
cout<<"Enter attendee’s age. ";
cin>>age;
  if(age<12){
   fprice=price*0.5;
   cout<<"Final ticket price "<<fprice<<endl;
  }else{cout<<"final price is 500";}

}
else if(choice==4) cout<<"Invalid Choice"<<endl;
else cout<<"invalid menu choice"<<endl;



return 0;
}
