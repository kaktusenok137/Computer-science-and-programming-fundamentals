#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	int masA[5][5];

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << "Матрица A" << ends << i + 1 << ends << j + 1 << ends;
			cin >> masA[i][j];
		}

	}
	cout << "Матрица A" << endl;

	for (int i = 0; i < 4; i++)
	{
		cout << endl;
		for (int j = 0; j < 4; j++)
		{
			cout << " " << masA[i][j];
			cout << ends;
		}
	}
	cout << endl;

	int s1, s2;
	cout << "Какие строки поменять местами? ";
	cin >> s1 >> s2;

	for (int j = 0; j < 4; j++)
	{
		int R = masA[s1-1][j];
		masA[s1-1][j] = masA[s2-1][j];
		masA[s2-1][j] = R;
	}

	cout << "Новая матрица A" << endl;

	for (int i = 0; i < 4; i++)
	{
		cout << endl;
		for (int j = 0; j < 4; j++)
		{
			cout << " " << masA[i][j];
			cout << ends;
		}
	}
	cout << endl;
}
