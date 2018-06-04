//Zhejian  peng
#include <iostream>
using namespace std;
#define N 100
int main() 
{
	int* arr = new int[N];
	int tc;
	while (cin>>tc)
	{
		if (tc == 0)
			break;
		for (int i = 0; i < N; i++)
		{
			arr[i] = 0;
		}
		while(tc--)
		{ 	
			int age;
			cin >> age;
			arr[age]++;
		}
		for (int i = 0; i < N; i++)
		{
			for (int j = arr[i]; j > 0; j--)
			{
				printf("%d", i);
				if (i == N - 1 && j == 1)
				{
				}
				else
				{
					printf(" ");
				}
			}
		}
		cout << endl;
	}
}
