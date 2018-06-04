//Zhejian  peng
#include <iostream>
using namespace std;
int main() 
{
	int tc = 0;
	long num;
	long limit;
	while (cin >> num >> limit)
	{	
		
		if (num < 0 || limit < 0)
			break;
		tc++;
		int a = num;
		int count = 0;
		while (1)
		{
			if (num == 1 || num-limit >0 )
			{
				count++;
				break;
			}
			count++;
			if (num % 2 == 0)
			{
				num = num / 2;
			}
			else
			{
				num = num * 3 + 1;
				if (num - limit>0)
					break;
			}
		}
		cout <<"Case "<<tc<<": A = "<<a<<", limit = "<<limit<<", number of terms = "<<count<< endl;
	}
}
