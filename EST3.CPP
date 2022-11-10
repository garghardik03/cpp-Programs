#include <iostream>
using namespace std;
class loc
{
    intlongitude, latitude;

public:
    loc() {} // constructors
    loc(intlg, intlt)
    {
        longitude = lg;
        latitude = lt;
    }
    int show()
    {
        cout << longitude << " ";
        cout << latitude << "\n";
    }

    loc operator+(loc op2);
    loc operator-(loc op2);
    loc operator=(loc op2);
    loc operator++();
};
// Overload + for loc
loc loc::operator+(loc op2)
{
    loc temp;
    temp.longitude = op2.longitude + longitude;
    temp.latitude = op2.latitude + latitude;
    return temp;
}
// Overload - for loc
loc loc::operator-(loc op2)
{
    loc temp;
    // notice order of operands
    temp.longitude = longitude - op2.longitude;
    temp.latitude = latitude - op2.latitude;
    return temp;
}
// Overload asignment for loc
loc loc::operator=(loc op2)
{
    longitude = op2.longitude;
    latitude = op2.latitude;
    return *this; // i.e., return object that generated call
}
// Overload prefix ++ for loc
loc loc::operator++()
{
    loc temp;
    temp.longitude=longitude++;
    temp.latitude=latitude++;   //no need to use return this 
    return temp;
}

intmain()
{
    loc ob1(10, 20), ob2(5, 30), ob3(90, 90);
    ob1.show();
    ob2.show();
    ++ob1;
    ob1.show(); // displays 11 21
    ob2 = ++ob1;
    ob1.show();      // displays 12 22
    ob2.show();      // displays 12 22
    ob1 = ob2 = ob3; // multiple assignment
    ob1.show();      // displays 90 90
    ob2.show();      // displays 90 90
    return 0;
}