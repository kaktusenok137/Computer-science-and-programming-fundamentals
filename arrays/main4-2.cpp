#include <iostream>

using namespace std;

int main()
{
setlocale(LC_ALL, "");
	int a;
	cout << "Количество строк матрицы = ";
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

	int s1, s2;
	cout << "Какие строки поменять местами? ";
	cin >> s1 >> s2;

	int* R = masA[s1-1];
   	masA[s1-1] = masA[s2-1];
   	masA[s2-1] = R;
 
	cout << "Novaya Matrica A" << endl;
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

   	for (int i = 0; i < a; i++)
   	{
        delete[] masA[i];
   	}
   		delete[] masA;
return 0; 
}
