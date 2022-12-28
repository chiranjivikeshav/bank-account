#include<iostream>
using namespace std;
#include<iomanip>

class bank
{
      char name[20];
      int acno;
      char actype[20];
      int bal;
public :
      void opbal(void);
      void deposit(void);
      void withdraw(void);
      void display(void);
};
     void bank:: opbal(void)
 {
    cout<<endl<<endl;
    cout<<"Enter name : "<<endl;
    cin>>name;
    cout<<"Enter account number : "<<endl;
    cin>>acno;
    cout<<"Enter account type : "<<endl;
    cin>>actype;
    cout<<"Enter opening balance : "<<endl;
    cin>>bal;
 }

 void bank::deposit(void)
{
int deposit=0;
cout<<"Enter deposit amount :"<<endl;
cin>>deposit;
bal=deposit+bal;
cout<<" Deposit Balance :- = "<<bal<<endl;
}

void bank:: withdraw(void)
{
    int withdraw;
    cout<<"Balance amount = "<<bal<<endl;
    cout<<"Enter withdraw Amount :- "<<endl;
    cin>>withdraw;

    if(bal>withdraw)
    {
        bal=bal-withdraw;
        cout<<"After withdraw Balance is = "<<bal<<endl;
    }
    else
    {
        cout<<" Not enough balance "<<endl;
    }
}
 
 void bank::display(void)
 {
cout<<endl<<endl;
cout<<setw(50)<<" Details"<<endl;
cout<<setw(50)<<" name  "<<name<<endl;
cout<<setw(50)<<"A/c No. "<<acno<<endl;
cout<<setw(50)<<"A/c type "<<actype<<endl;
cout<<setw(50)<<" Balance "<<bal<<endl;
 }

int main(){
     bank o1;
     int choice ;
     do
     { 
        cout<<" Banking system program"<<endl;
        cout<<"Choice List "<<endl;
        cout<<"1)To assign Initial Value "<<endl;
        cout<<"2)To Deposit"<<endl;
        cout<<"3)To Withdraw"<<endl;
        cout<<"4)To Display All Details"<<endl;
        cout<<"5) EXIT"<<endl;
        cout<<" Enter your choice :-"<<endl;
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

