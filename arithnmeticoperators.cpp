#include <iostream>
#include <cstring>
using namespace std;
class Distance
{
private:
    intfeet;
    float inches;

public:
    Distance(intf = 0, float i = 0.0)
    {
        feet = f;
        inches = i;
    }
    int getdata()
    {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
    }
    int putdata()
    {
        cout << feet << "\' " << inches << "\"" << endl;
    }
    Distance operator+(Distance d)
    {
        Distance temp;
        temp.feet = feet + d.feet;
        temp.inches = inches + d.inches;
        if (temp.inches >= 12.0)
        {
            temp.inches -= 12.0;
            temp.feet++;
        }
        return temp;
    }
    Distance operator-(Distance d)
    {
        Distance temp;
        temp.feet = feet - d.feet;
        temp.inches = inches - d.inches;
        if (temp.inches < 0.0)
        {
            temp.inches += 12.0;
            temp.feet--;
        }
        return temp;
    }
    Distance operator*(intn)
    {
        Distance temp;
        temp.feet = feet * n;
        temp.inches = inches * n;
        if (temp.inches >= 12.0)
        {
            temp.inches -= 12.0;
            temp.feet++;
        }
        return temp;
    }
    Distance operator/(intn)
    {
        Distance temp;
        temp.feet = feet / n;
        temp.inches = inches / n;
        if (temp.inches >= 12.0)
        {
            temp.inches -= 12.

                int
                main()
            {
                Distance d1(10, 2.5), d2(2, 1.5), d3;
                d3 = d1 + d2;
                d3.putdata();
                d3 = d1 - d2;
                d3.putdata();
                d3 = d1 * 5;
                d3.putdata();
                d3 = d1 / 2;
                d3.putdata();
                return 0;
            }
            return 0;
        }