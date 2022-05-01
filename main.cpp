#include "Circle.h"

int main()
{
	int x = 0;
	int y = 0;
	int r = 0;

	cout << "Enter x pos : ";
	cin >> x;
	cout << "Enter y pos : ";
	cin >> y;
	cout << "Enter radius : ";
	cin >> r;

	CCircle c1(x, y, r);
	c1.draw();
	c1.generate();
	c1.calcArea();

	return 0;
}