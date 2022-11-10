#include <iostream>
using namespace std;
class Distance
{
private:
    intfeet;
    intinches;

public:
    // Default constructor
    Distance();
    // Parameterized constructor
    Distance(int, int);
        // method to display distance
        int displayDistance();
    // overloaded unary minus (-) operator
    friend Distance operator*(Distance db1, Distance db2);
};

Distance::Distance()
{
    feet = 0;
    inches = 0;
}
Distance::Distance(intf, inti)
{
    feet = f;
    inches = i;
}
int Distance::displayDistance()
{
    cout << "F: " << feet << " I:" << inches << endl;
}
Distance operator*(Distance db4, Distance db5)
{
    Distance db2;
    db2.feet = db5.feet * db4.feet;
    db2.inches = db5.inches * db4.inches;
    return db2;
}

intmain()
{
    Distance D1(11, 10); 
    Distance D2(-5, 11);
    D1.displayDistance();
    D2.displayDistance();
    D1 =D1*D2;                  // activates operator-() function
    D1.displayDistance();
    return 0;
}