#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	cout << "Введите размер файла в байтах" << endl;
	double b;
	cin >> b;
	double Kb = b / 1024;
	cout << "Файл занимает " << Kb << " Кб";
}