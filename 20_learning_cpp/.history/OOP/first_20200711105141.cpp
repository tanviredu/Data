#include <iostream>
using namespace std;

class BankAccount
{
private:
    /* if you delare private 
       you probably have to write getter
       and setter to acces it */
    float balance; // this is a attribute

public:
    BankAccount();        // this is a constructor
    void Deposite(float); // this method dont return anything but takea float
    void withdrawl();
    // getter
    float getBalance();
};

BankAccount::BankAccount()
{
    // this is the constructor
    // it can access the the private method
    balance = 0;
}

float BankAccount::getBalance()
{
    return balance;
}

int main()
{
    BankAccount checking;
    BankAccount saving;
    cout << "Checking Balance is :" << checking.getBalance() << endl;

    cout << "Saving Balance is :" << saving.getBalance() << endl;
}