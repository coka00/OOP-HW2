#pragma once
#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include <ctime>

using namespace std;

class CCircle
{
private:
	int m_x;
	int m_y;
	int m_radius;

public:
	CCircle();
	CCircle(int x, int y, int r);
	void draw();
	void generate();
	void calcArea();
};

