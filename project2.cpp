/*Parking Management System*/
#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
int main()
{
    int c,r,b;
    c=r=b=0;
    int u_input;
    int amount=0,counts=0;
while(1){
cout<<"\nPress 1 for Rickshaw"<<endl;
cout<<"Press 2 for Car"<<endl;
cout<<"Press 3 for Bike"<<endl;
cout<<"press 4 to show the record"<<endl;
cout<<"Press 5 to delete the record"<<endl;
cout<<"press 6 for exit";
cin>>u_input;
if(u_input==1)
{
    if(counts<=50){
    amount=amount+100;
    counts=counts+1;
    r++;
}
else cout<<"parking is Full";
}
else if(u_input==2)
{
   if(counts<=50){
    amount=amount+200;
    counts=counts+1;
    c++;}
    else cout<<"parking is totally full";
}
else if(u_input==3)
{
    if(counts<=50){
    amount=amount+300;
    counts=counts+1;
    b++;}
    else cout<<"Parking is totally Full";
}
else if(u_input==4)
{
    cout<<"***************************************\n";
    cout<<"the total amount="<<amount<<endl;
   cout<<"The total number of vehicle parked="<<counts<<endl;
   cout<<"Total number of Rickshaw parked="<<r<<endl;
   cout<<"Total number of Car parked="<<c<<endl;
   cout<<"Total number of Bike parked="<<b<<endl;
    cout<<"\n***************************************";
}
else if(u_input==5)
{
    amount=0;
    counts=0;
    c=r=b=0;
    cout<<"*****************************************"<<endl;
    cout<<"RECORD DELETED"<<endl;
    cout<<"*****************************************"<<endl;
}
else if(u_input==6)
{
    exit(2);
}
else
    cout<<"Invalid number<<endl";
    }
}
