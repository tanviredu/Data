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
};

BankAccount::BankAccount()
{
    // this is the constructor
    // it can access the the private method
    balance = 0;
}

int main()
{
    BankAccount checking;
    BankAccount saving;
}