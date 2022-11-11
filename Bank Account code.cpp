#include<iostream>
using namespace std;
#include<iomanip>

class bank{
      char name[20];
      int acno;
      char actype[20];
      int bal;
public :
      void opbal(void)
      void deposit(void)
      void withdraw(void)
      void display(void)
};

     void bank:: opbal(void)
 {
    cout<<endl<<endl;
    cout<<"Enter name :-\t";
    cin>>name;
    cout<<"Enter account number :-\t";
    cin>>acno;
    cout<<"Enter account type :-\t ";
    cin>>actype;
    cout<<"Enter opening balance :-\t";
    cin>>bal;
 }

 void bank::deposit(void)
{
int deposit=0;
cout<<"Enter deposit amount :-\t";
cin>>deposit;
bal=deposit+bal;
cout<<"\nBalance amount =\t\t"<<bal;
}

void bank:: withdraw(void)
{
    int withdraw;
    cout<<"\nBalance amount = \t\t"<<bal;
    cout<<"\nEnter withdraw Amount :-\t";
    cin>>withdraw;

    if(bal>withdraw)
    {
        bal=bal-withdraw;
        cout<<"\nAfter withdraw Balance is = \t";
    }
    else
    {
        cout<<"Not enough balance ";
    }
}
 
 void bank::display(void)
 {
cout<<
cout<<setw(50)<<" Details"<<endl;
cout<<setw(50)<<" name  "<<name<<endl;
cout<<setw(50)<<"A/c No. "<<acno<<endl;
cout<<setw(50)<<"A/c type "<<actype<<endl;
cout<<setw(50)<<" Balance "<<bal<<endl;
 }

int main(){
     bank o1;
     int choice ;
     do{ 
        cout<<"\n\n\n\t Banking system program";
        cout<<"\n\nChoice List\n\n";
        cout<<"1)To assign Initial Value\n";
        cout<<"2)To Deposit\n";
        cout<<"3)To Withdraw\n";
        cout<<"4)To Display All Details\n";
        cout<<"5) EXIT\n";
        cout<<" Enter your choice :-";
        cin>>choice;
        switch(choice)
{
case 1: o1.opbal();
break;
case 2: o1.deposit();
break;
case 3: o1.withdraw();
break;
case 4: o1.display();
break;
}
     }while(1);
     end:
    return 0;
}