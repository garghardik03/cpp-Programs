#include <iostream>
using namespace std;
class loc
{
    intlongitude, latitude;

public:
    loc() {}
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
    loc operator()(inti, intj);
};
// Overload ( ) for loc
loc loc::operator()(inti, intj)
{
    longitude = i;
    latitude = j;
    return loc(i, j);
}

// Overload + for loc
loc loc::operator+(loc op2)
{
    loc temp;
    temp.longitude = op2.longitude + longitude;
    temp.latitude = op2.latitude + latitude;
    return temp;
}

intmain()
{
    loc ob1(10, 20), ob2(1, 1);
    ob1.show();
    ob1(7, 8); // can be executed by itself
    ob1.show();
    ob1 = ob2 + ob1(10, 10); // can be used in expressions
    ob1.show();
    return 0;
}