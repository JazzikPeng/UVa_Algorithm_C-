//Zhejian Peng
using namespace std;
#include <stdio.h>
#include <math.h>
#include <iostream>


int main()
{
	double n, p;
	double result;
	while (cin >> n >> p)
	{
		result = pow(p, 1 / n);
		printf("%.0lf\n", result);
	}
	return 0;
	system("pause");
}