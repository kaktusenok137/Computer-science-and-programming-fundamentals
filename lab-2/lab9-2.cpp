#include <iostream>

using namespace std;

template <typename t>



t arithmeticMeanOfArray(t* Array, int size)
{
	t sum = 0, aMean;
	int i = 0;

	cout << "Enter array elements: " << endl;
	for (i = 0; i < size; i++)
		cin >> Array[i];

	for (i = 0; i < size; i++)
		sum += Array[i];

	aMean = sum / size;

	return aMean;
}

int main()
{
	const int iSize = 3, lSize = 2, dSize = 3, chSize = 4;
	int iArray[iSize];
	long lArray[lSize];
	double dArray[dSize];
	char chArray[chSize];

	cout << "Arithmetic Mean of array int= " << arithmeticMeanOfArray(iArray, iSize) << endl;
	cout << "Arithmetic Mean of array long= " << arithmeticMeanOfArray(lArray, lSize) << endl;
	cout << "Arithmetic Mean of array double= " << arithmeticMeanOfArray(dArray, dSize) << endl;
	cout << "Arithmetic Mean of array char= " << arithmeticMeanOfArray(chArray, chSize) << endl;
}
