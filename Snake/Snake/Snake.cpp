// Snake.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include "figure.h"
#include "point.h"
#include <iostream>
#include <conio.h>
#include <windows.h>
  

using namespace std;

int main()
{
	system("mode con cols=80 lines=28");
	
	wallhorizont lineh_up(2, 78, 2, 'h');
	lineh_up.drow();
	wallhorizont lineh_dawn(2, 78, 23, 'h');
	lineh_dawn.drow();
	wallvertical linev_left(2, 24, 2, 'v');
	linev_left.drow();
	wallvertical linev_rigth(2, 24, 78, 'v');
	linev_rigth.drow();
	point p1(6, 6, '&');
	p1.draw();
	COORD position = { 0, 24 };
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hConsole, position);
	cout << endl;
	/*point p1(2, 6, '&');
	p1.draw();
	point p2(5, 9, '@');
	p2.draw();
	point p3(7, 8, '*');
	p3.draw();
	point p4(8, 1, '!');
	p4.draw();*/
}
