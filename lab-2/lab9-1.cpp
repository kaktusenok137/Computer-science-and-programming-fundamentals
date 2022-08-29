#include <iostream>
#include <cmath>

using namespace std;

void input(float* a, float* b, float* c, float* x, float* y, float* z);
float calculation(float a, float b, float c, float x, float y, float z);
void rezult(float f);

int main()
{
	float a, b, c, x, y, z;
	input(&a, &b, &c, &x, &y, &z);
	float f = calculation(a, b, c, x, y, z);
	rezult(f);
}


void input(float* a, float* b, float* c, float* x, float* y, float* z)
{
	cout << "Enter a b c x y z:" << endl;
	cin >> *a >> *b >> *c >> *x >> *y >> *z;
}


float calculation(float a, float b, float c, float x, float y, float z)
{
	float d1, d2, d3, f;
	d1 = a * pow(z, 3);
	d2 = b * pow(y, 2) + c;
	d3 = pow(x, 3) - b;
	f = d1 - (d2 / d3);
	return f;
}


void rezult(float f)
{
	cout << endl << "Answer= " << f;
}
