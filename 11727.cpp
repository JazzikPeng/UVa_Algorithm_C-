//Zhejian Peng
#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
	int tc;
	int count=0;
	cin >> tc;
	while (tc--)
	{
		count++;
		int a, b, c;
		cin >> a >> b >> c;
		int result =a;
		if (a > b)
		{
			if (b > c)
				result = b;
			else if (c > b && c > a)
				result = a;
			else if (c > b && a > c)
				result = c;
		}
		else if (b > a)
		{
			if (a > c)
				result = a;
			else if (c > a && c > b)
				result = b;
			else if (c > a && c < b)
				result = c;
		}

		
		cout << "Case " << count << ": " << result << endl;
	}
	system("pause");
}