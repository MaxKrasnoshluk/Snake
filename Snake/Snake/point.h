#pragma once
#include "pch.h"
#include "direction.h"
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
	point setpoint (point p)
	{
		x = p.x;
		y = p.y;
		symb = p.symb;
		return *this;
	}
	void move(int offset, dir direction )
	{
		if (direction == Left)
		{
			x = x - offset;
		}
		if (direction == Rigth)
		{
			x = x + offset;
		}
		if (direction == Up)
		{
			y = y - offset;
		}
		if (direction == Down)
		{
			y = y + offset;
		}
	}
	void draw()
	{
		void* handle = GetStdHandle(STD_OUTPUT_HANDLE);
		CONSOLE_CURSOR_INFO structCursorInfo;
		GetConsoleCursorInfo(handle, &structCursorInfo);
		structCursorInfo.bVisible = FALSE;
		SetConsoleCursorInfo(handle, &structCursorInfo);

		COORD position = { x, y};
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleCursorPosition(hConsole, position);
		cout << symb;
	}
	void clear()
	{
		symb = ' ';
		draw();
	}
};

