#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	int a;
	cout << "Количество строк квадратной матрицы = ";
	cin >> a;

	int** mas = new int*[a];
	for (int i = 0; i < a; i++)
	{
		mas[i] = new int[a];
	}

	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < a; j++)
		{
			cout << "Элемент [" << i + 1 << "] [" << j + 1 << "]  ";
			cin >> mas[i][j];
		}
	}
	cout << "Матрица " << endl;

	for (int i = 0; i < a; i++)
	{
		cout << endl;
		for (int j = 0; j < a; j++)
		{
			cout << " " << mas[i][j];
			cout << ends;
		}
	}
	cout << endl;
  
int n_str[5] = { 0 };
	int n_stl[5] = { 0 };
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < a; j++)
		{
			if (mas[i][j] == 0)
			{
				n_str[i] += 1;
			}
			if (mas[j][i] == 0)
			{
				n_stl[i] += 1;
			}
		}
		cout << "Нулей в строке " << i + 1 << " = " << n_str[i] << endl;
		cout << "Нулей в столбце " << i + 1 << " = " << n_stl[i] << endl;
	}

	cout << endl;

  int g;
	for (int i = 0; i < a; i++)
	{
		g = a - i - 1;
			if (n_str[i] == n_stl[g])
			{
				cout << "Элементы " << mas[i][i] << " и " << mas[i][g] << endl;
			}
	}

}
