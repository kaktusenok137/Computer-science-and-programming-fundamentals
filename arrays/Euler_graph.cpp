#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	int a;
	cout << "Число вершин графа= ";
	cin >> a;

	int** masA = new int*[a];
	for (int i = 0; i < a; i++)
	{
		masA[i] = new int[a];
	}

	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < a; j++)
		{
			cout << "Элемент [" << i + 1 << "] [" << j + 1 << "]  ";
			cin >> masA[i][j];
		}
	}
	cout << "Matrica A" << endl;

	for (int i = 0; i < a; i++)
	{
		cout << endl;
		for (int j = 0; j < a; j++)
		{
			cout << " " << masA[i][j];
			cout << ends;
		}
	}
	cout << endl;

	int i, SumStr;
	bool E = 1;
	i = 0;

	while (i < a && E != 0)
	{
		SumStr = 0;
		for (int j = 0; j < a; j++)
		{
			if (i != j)
			{
				SumStr += masA[i][j];
			}
		}
		cout << "Сумма в строке " << i << ": " << SumStr << "\n";
	
		if (SumStr % 2 != 0 || SumStr == 0)
		{
			E = 0;
			cout << "E=0";
		}
		i = i + 1;
	}

	if (E != 0)
	{
		cout << "\n Eyler";
	}
	else
	{
		cout << "\n Not Eyler";
	}

	system("pause");
	return 0;
}
