#include <iostream>
#include <cstring>
using namespace std;
class account
{
    string name;
    intaccount_number;
    string account_type;
    float balance_amount;

public:
    int setData(int)
    {
        cin >> name;
        cin >> account_number;
        cin >> account_type;
        cin >> balance_amount;
    }
    int printDeheads(int)
    {
        cout << "The name of the account holder is " << name << endl;
        cout << "The account_number of the account holder is " << account_number << endl;
        cout << "The account type of the account holder is " << account_type << endl;
        cout << "The balance amount of the account holder is " << balance_amount << endl;
    }
    int deposit_amount(int)
    {
        float cash;
        cout << "Enter the amount to be deposited" << endl;
        cin >> cash;
        balance_amount += cash;
        cout << "The amount after deposit is " << balance_amount << endl;
    }
    int withdraw_amount(int)
    {
        intrupees;
        cout << balance_amount << endl;
        cout << "Enter the amount to be withdrawn " << endl;
        cin >> rupees;
        balance_amount = (balance_amount - rupees);
        cout << "The amount after withdrawal is " << balance_amount << endl;
    }
    int getDeheads(int)
    {
        cout << "The name of the account holder is " << name << endl;
        cout << "THe amount left in his/her bank after all the transactions is " << balance_amount << endl;
    }
};
intmain()
{
    account client1;
    client1.setData();
    client1.printDeheads();
    client1.deposit_amount();
    client1.withdraw_amount();
    client1.getDeheads();
    return 0;
}
