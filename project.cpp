#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
class bank
{
    int balance;
    char name[100],add[100],y;
public:
    void open_account();
    void deposite_money();
    void withdraw_money();
    void display_account();
};
void bank:: open_account()
{
 cout<<"Enter your full name:";
 cin.ignore();
 cin.getline(name,100);
 cout<<"Enter your Address::";
 cin.ignore();
 cin.getline(add,100);
 cout<<"What type of account you want to open saving (s) or current (c):";
 cin>>y;
 cout<<"Enter amount for deposit:";
 cin>>balance;
 cout<<"Your account is created"<<endl;
}
void bank::deposite_money()
{
    int a;
    cout<<"Enter how much money you want to deposit: ";
    cin>>a;
    balance+=a;
    cout<<"total amount you deposit:\t "<<balance;
}
void bank::display_account()
{
    cout<<"Your full name:"<<name<<endl;
    cout<<"Your address:"<<add<<endl;
    cout<<"type of account that you open:"<<y<<endl;
    cout<<"Amount you deposite:"<<balance<<endl;
}
void bank::withdraw_money()
{
    float amount;
    cout<<"\nwithdraw:";
    cout<<"Enter amount to withdraw:";
    cin>>amount;
    balance-=amount;
    cout<<"now the total amount left:"<<balance;
}
int main()
{
    int x;
    int ch;
    bank obj;
    do
    {
cout<<"1) open Account\n";
cout<<"2) Deposit Money\n";
cout<<"3) Withdraw Money\n";
cout<<"4) Display Account\n";
cout<<"5) Exit\n";
cout<<"Select the options from above";
cin>>ch;
switch(ch)
{
    case 1:"1) open account\n";
    obj.open_account();
    break;
    case 2:"2) deposite money\n";
    obj.deposite_money();
    break;
    case 3:"3) withdraw money\n";
    obj.withdraw_money();
    break;
    case 4:"4) display account\n";
    obj.display_account();
    break;
    case 5:"5) Exit\n";
            exit(5);
    default:
        cout<<"these is not exist try again\n";
        }
cout<<"\ndo you want to select next option then press:: Y\n";
cout<<"if you want to exit then press ::N";
x=getch();
if(x=='N')
exit(3);
}while(x=='Y');
}
