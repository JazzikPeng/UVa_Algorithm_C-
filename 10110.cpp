#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	long long num, a,b;
	long long count=0;
	while (cin >> num)
	{
		if (num == 0)
			break;
		a = (long long) sqrt(num);// Decide if num is a perfect square number. What a brilliant algo.£¡
		b = a*a;				  // A perfect square is going to have even nubmer of factors, so light will be off.
		if (b == num)
			cout << "yes" << endl;
		else
			cout << "no" << endl;
		
	}
	return 0;
}