// Snake.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include "point.h"
#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

int main()
{
	point p1;
    p1.x = 15;
	p1.y = 15;
	p1.symb = '@';
	p1.draw();
	point p2;
	p2.x = 5;
	p2.y = 5;
	p2.symb = '%';
	p2.draw();
}
