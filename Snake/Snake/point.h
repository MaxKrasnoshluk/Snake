#pragma once
#include "pch.h"
#include <iostream>
#include <windows.h>

using namespace std;
class point
{
	
public:
	int x;
	int y;
	char symb;
	point(int _x, int _y, char _symb)
	{
		x = _x;
		y = _y;
		symb = _symb;
	}
	void draw()
	{
		COORD position = { x, y};
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleCursorPosition(hConsole, position);
		cout << symb;
	}
};

