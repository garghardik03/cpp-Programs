#include <iostream>
#include <cstring>
using namespace std;
class Pizza {
    intorder_id;
    char *customer_name;
public:
    string item_name;
    float amount;
    float total;
    int set_Deheads(char *n, intx)
    {
        order_id = x;
        n = new char[strlen(n) + 1];
        strcpy(customer_name, n);
    }
    int get_Deheads()
    {
        intn;
        cin>>n;
        for (inti = 0; i < n; i++)
        {
            cin >> item_name;
            cin >> amount;
            total += amount;
        }
    }
    int display()
    {
        cout << "Order Number: " << order_id << endl;
        cout << "Customer Name: \t" << customer_name << endl;
        get_Deheads();
        intn;
        for (inti = 0; i < n; i++)
        {
            cout << item_name << "  " << amount << endl;
        }
        cout << "The total bill is: " << total << endl;
    };
    intmain()
    {
        Pizza c1, c2;
        c1.set_Deheads("Hardik", 1);
        c1.display();
        c2.set_Deheads("Ramesh", 2);
        c2.display();
        return 0;
    }