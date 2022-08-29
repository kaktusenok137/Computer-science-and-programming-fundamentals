#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");

	int x[4], y[4];                 //здесь будем держать координаты х и у
	double xc[2], yc[2];            //здесь координаты средин
	for (int i = 0; i < 4; i++)     //заполняем значениями вершины по порядку
	{
		cout << "x" << i + 1 << " = ";
		cin >> x[i];
		cout << "y" << i + 1 << " = ";
		cin >> y[i];
	}

	//ищем средины
	xc[0] = (double)(x[0] + x[2]) / 2;
	xc[1] = (double)(x[1] + x[3]) / 2;

	yc[0] = (double)(y[0] + y[2]) / 2;
	yc[1] = (double)(y[1] + y[3]) / 2;

	if (xc[0] == xc[1] && yc[0] == yc[1])
		cout << "Параллелограмм" << endl;
	else
		cout << "Не параллелограмм" << endl;

	return 0;
}
