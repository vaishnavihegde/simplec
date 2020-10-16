#include <iostream>
#include<cstdlib>

using namespace std;

class bankaccount
{
    char name[15];
    int accno;
    int balance;
public:
    void read()
    {
        cout<<"Enter name:"<<endl;
        cin>>name;
        cout<<"Enter account number:"<<endl;
        cin>>accno;
        cout<<"Enter balance:"<<endl;
        cin>>balance;
    }
    void print()
   {
     cout<<"Name:"<<name<<endl;
     cout<<"Account Number:"<<accno<<endl;
     cout<<"Balance:"<<balance<<endl;
   }
   void deposit()
   {
       int amount;
       cout<<"Enter the amount to be deposited:"<<endl;
       cin>>amount;
       balance=balance+amount;
       cout<<"Your current bank details:"<<endl;
       print();
   }
   void withdrawal()
   {
        int amount;
        cout<<"Enter the amount to be withdrawn:"<<endl;
        cin>>amount;
        if(amount>balance)
            cout<<"Insufficient balance"<<endl;
        else
            balance=balance-amount;
        cout<<"Your current bank details:"<<endl;
        print();

   }
};
int main()
{

    bankaccount a;
    int ch;
    a.read();
    while(1)
    {
        cout<<" 1 for display \n 2 for deposit \n 3 for Withdrawal \n 4 for exit"<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1:a.print();
                   break;
            case 2:a.deposit();
                   break;
            case 3:a.withdrawal();
                   break;
            case 4:exit(0);
            default: cout<<"Invalid input. Please try again"<<endl;

        }
    }
    return 0;
}
