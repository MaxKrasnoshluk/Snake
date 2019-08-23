// Snake.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;
void draw(int x_, int y_, char symb_)
{
	COORD position = { x_,y_ };
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hConsole, position);
	cout << symb_;
}
int main()
{
	  
	int x = 10;
	int y = 10;
	char symb = '#';
	draw(x, y, symb);
	x = 20;
	y = 20;
	symb = '$';
	draw(x, y, symb);
}
