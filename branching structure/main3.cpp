#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	int num;
	cout << "Enter number: ";
	cin >> num;
	unsigned int i=0, t = num, d[10] = { 0 };
	do 
	{
		d[i++] = t % 10;
	}
	while (t /= 10);

	cout << "Total digits in number = " << i<< endl;

	if (i % 2 != 0)
		cout << "The number of digits in the entered number is odd, the middle digit = "<< d[i/2];
	else
		cout << "The number of digits in the entered number is even";
	return 0;
}
