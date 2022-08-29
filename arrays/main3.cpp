#include <iostream>
#include <cmath>

using namespace std;

int main()

{
	setlocale(0, "");

	double x, y, z, sn, sn2, a, b, rez;
	const double PI = 3.14;

	cout << "Enter x, y, z: \n";
	cin >> x >> y >> z;

	sn = sin((x*PI) / 180);

	sn2 = pow(sn, 2);

	a = (log(2 + sn2) / log(10.0));

	b = pow((3 - y), (1/5));

	rez = (a + b) / (1 + 3 * z);
	cout << "Result 1 expressions = " << rez << endl;

	//2 expressions
	double x1 = 41, z1 = 3.72 , sn1, sn21, a1, b1, rez1;
	const double PI = 3.14159;
	const double e = 2.71828;

	a1 = 1 / (pow(e, z1)); // по правилу n^-m = 1/n^m

	sn1 = sin((x1*PI) / 180);

	sn21 = pow(sn1, 2);

	b1 = (log(2 + sn21) / log(10.0));

	rez1 = a1 + b1;
	cout << "Result 2 expressions = " << rez1 << endl;

	system("pause");
	return 0;
}
