#include <iostream>
#include <math.h>

using namespace std;

int main()

{
	int A[5][5], max, y;
	double D[5][5];

	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 3; j++) 
		{
			cout << "Matrix A" << ends << i + 1 << ends << j + 1 << ends;
			cin >> A[i][j];
		}

	}

	cout << "Matrix A" << endl;

	for (int i = 0; i < 3; i++)
	{
		cout << endl;
		for (int j = 0; j < 3; j++)
		{
			cout << " " << A[i][j];
			cout << ends;
		}
	}

	cout << endl;

	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 3; j++)
		{
			cout << "Matrix D" << ends << i + 1 << ends << j + 1 << ends;
			cin >> D[i][j];
		}
	}

	cout << endl << "Matrix D" << endl;

	for (int i = 0; i < 3; i++)
	{
		cout << endl;
		for (int j = 0; j < 3; j++)
		{
			cout << " " << D[i][j];
			cout << ends;
		}

	}

	for (int i = 0; i < 3; i++)
	{
		max = 0;
		max = A[i][0];
		y = 0;

		for (int j = 0; j < 3; j++)
		{
			if (A[i][j] > max)
			{
				max = A[i][j];
				y = j;
			}
		}

	D[i][y + 1] = A[i][y + 1];
	D[i][y + 2] = A[i][y + 2];

	}

	cout << endl;
	cout << "New matrix D" << endl;

	for (int i = 0; i < 3; i++)
	{
		cout << endl;
		for (int j = 0; j < 3; j++)
		{
			cout << " " << D [i][j];
			cout << ends;
		}
	}
	system ("pause");
	return 0;

}
