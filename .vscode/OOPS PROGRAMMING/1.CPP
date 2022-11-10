#include <iostream>
using namespace std;

class Point
{
private:
	intx, y;
public:
	Point(inti = 0, intj = 0) {
		x = i; y = j;
	}
	int print() {
		cout << "x = " << x << ", y = " << y << '\n';
	}
};

intmain() {
	Pointt(20, 20);
	t.print();
	t = 30; // Member x of t becomes 30
	t.print();
	return 0;
}
