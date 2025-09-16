
#include<iostream>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    double balance;

public:
    BankAccount(int n, double b)
    {
        accountNumber=n;
        balance=b;
    }

    int getaccNmbr()
    {
        return accountNumber;
    }

    double getbalance()
    {
        return balance;
    }

    void setbalance(double b)
    {
        balance=b;
    }

    void showBalance()
    {
        cout << "Account " << accountNumber
             << " Balance = " << balance << endl;
    }

};

void transfer(BankAccount &A, BankAccount &B, double ammount) // object called by reference
{
    if(A.getbalance()>=ammount)
    {
        A.setbalance(A.getbalance()-ammount);
        B.setbalance(B.getbalance()+ammount);
        cout<<"Transfer successfully"<<endl;
    }
    else
    {
        cout<<"Insuffifient balance"<<endl;
    }
}

int main()
{
    BankAccount ac1(17,50000);
    BankAccount ac2(43,1000);

    ac1.showBalance();
    ac2.showBalance();

    transfer(ac1,ac2,10000);  //argument
    ac1.showBalance();
    ac2.showBalance();
}
