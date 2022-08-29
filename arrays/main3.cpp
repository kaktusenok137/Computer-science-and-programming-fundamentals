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
	cout << "Result = " << rez << endl;

	system("pause");
	return 0;
}
