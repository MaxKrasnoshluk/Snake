// Snake.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include "figure.h"
#include "point.h"
#include "Direction.h"
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
	point p1(10, 10, '*');
	snake shiva(p1, 3, Up );
	shiva.drow();
	shiva.move();
	COORD position = { 0, 24 };
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hConsole, position);
	cout << endl;
	
}
