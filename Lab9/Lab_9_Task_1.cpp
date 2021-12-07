#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	cout << "ВВедите N" << endl;
	int N, sec;
	cin >> N;
	sec = N % 60;
	cout << sec;
}