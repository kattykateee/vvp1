﻿#include <iostream> // подключение библиотеки
using namespace std; // объявление пространства имён

int d, L; // объявление переменных типа int
float pi = 3.14; // объявление переменной типа float

int main() // главная фукнция
{
	cin >> d; // ввод значения перменной
	L = pi * d; // вычисление длины окружности L = pi*d
	cout << L; // вывод результата
}