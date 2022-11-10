#include <iostream>
#include <cstring>
using namespace std;

class bank
{
    char *name;
    int*accno;
    string type;
    double balance;

public:
    bank()
    {
    }
    bank(char *n, inta, string type, double balance)
    {
        name = new char[strlen(n) + 1];
        strcpy(name, n);
        accno = new int;
        *accno = a;
        this->type = type;
        (*this).balance = balance;
    }
    int deposit(double a)
    {
        balance += a;
        cout << "Deposit was successful, Your Current Balance is: " << balance << endl;
    }
    int withdraw()
    {
        intn;
        cout << "Your Current Balance is: " << balance << endl;
        cout << "Enter the amount to withdraw" << endl;
        cin >> n;
        if (n <= balance)
        {
            balance -= n;
            cout << "Withdrawal successful" << endl;
            cout << "Your current balance is:" << balance << endl;
        }
        else
        {
            cout << "No sufficient funds" << endl;
        }
    }
    int display()
    {
        cout << "Name:" << name << endl;
        cout << "Balance:" << balance << endl;
        cout << "Acc No.:" << *accno << endl;
        cout << "Type of Account:" << type << endl;
    }
    ~bank()
    {
        delete[] name;
        delete accno;
    }
    friend int accountno(bank c);
};
int accountno(bank c)
{
    cout << "Friend account no." << *(c.accno) << endl;
}
intmain()
{
    bank teji("Tejvir", 6969, "Savings", 5000);
    teji.deposit(200);
    teji.withdraw();
    teji.display();
    accountno(teji);
    return 0;
}
