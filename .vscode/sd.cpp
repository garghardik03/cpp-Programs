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
    loc operator,(loc op2);
};
// overload comma for loc
loc loc::operator,(loc op2)
{
    loc temp;
    temp.longitude = op2.longitude;
    temp.latitude = op2.latitude;

    cout << op2.longitude << " " << op2.latitude << "\n";
    return temp;
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
    loc ob1(10, 20), ob2(5, 30), ob3(1, 1);
    ob1.show();
    ob2.show();
    ob3.show();
    cout << "\n";
    loc ob4(30,30);
    ob4 = (ob1, ob2 + ob2, ob3,ob4);
    ob1.show(); // displays 1 1, the value of ob3
    return 0;
}