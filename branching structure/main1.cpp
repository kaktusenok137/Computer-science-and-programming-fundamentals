#include <iostream>
#include <cmath>

using namespace std;

int main()

{
	setlocale(0, "");

	double x, c, rez1, rez2, rez3, b = 2, a = 3;

	cout << "Enter x: ";
	cin >> x;
	cout << "Enter c: ";
	cin >> c;

	if (x < 5 && c != 0)
	{
		rez1 = -(a)* x * x - b;
		cout << "При х<5 и с!=0 выражение равно " << rez1 << endl;
	}
	else if (x > 5 && c == 0)
	{
		rez2 = (x - a) / x;
		cout << "При х>5 и с=0 выражение равно " << rez2 << endl;
	}
else
	{
		rez3 = -(x) / c;
		cout << "Иначе выражение равно " << rez3 << endl;
	}
system("pause");
	return 0;
}
