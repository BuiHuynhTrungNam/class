#include<iostream>
using namespace std;

template<class Type>

class Point {
private:
	Type x;
	Type y;
public:
	Point(Type x, Type y) {
		this->x = x;
		this->y = y;
	}
	void printPoint();
};
template<class Type>
void Point::printPoint()
{
	cout << "x: " << x;
	cout << "y: " << y;
}
int main()
{
	Point <int> p(5, 10);
	p.printPoint();
}