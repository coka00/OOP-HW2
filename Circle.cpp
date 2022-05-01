#include "Circle.h"

CCircle::CCircle()
{
	m_x = 0;
	m_y = 0;
	m_radius = 0;
}

CCircle::CCircle(int x, int y, int r)
{
	m_x = x;
	m_y = y;
	m_radius = r;
}

void CCircle::draw()
{
	HDC hdc = GetWindowDC(GetForegroundWindow());
	Ellipse(hdc, m_x - m_radius, m_y - m_radius, m_x + m_radius, m_y + m_radius);
}

void CCircle::generate()
{
	for (int i = 0; i < 10; i++) 
	{
		srand(GetTickCount());

		m_x = rand()% 501 + 500;
		m_y = rand()% 401 + 100;
		m_radius = rand() % 91 + 10;

		draw();

		Sleep(1000);
	}
	
}

void CCircle::calcArea()
{
	int n = 0;
	cout << "Enter num of circles : ";
	cin >> n;

	if (n == 0 or n > 100)
		cout << "Error" << endl;
	else
		for (int i = 0; i < n; i++)
		{
			srand(GetTickCount());

			m_x = rand() % 501 + 500;
			m_y = rand() % 401 + 100;
			m_radius = rand() % 91 + 10;

			int area = 3.14 * m_radius * m_radius;
			cout << "Circle radius = " << area << endl;

			draw();

			Sleep(1000);
		}
}