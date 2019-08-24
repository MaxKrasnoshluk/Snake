// Snake.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include "wall.h"
#include "point.h"
#include <iostream>
#include <conio.h>
#include <windows.h>
  

using namespace std;

int main()
{
	point p1(2, 6, '&');   
	p1.draw();
	point p2(5, 9, '@');
	p2.draw();
	point p3(7, 8, '*');
	p3.draw();
	point p4(8, 1, '!');
	p4.draw();
	wall line(5, 10, 10, '-');
	line.drow();
}
