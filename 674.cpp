//Zhejian Peng
using namespace std;
#include <iostream>


int main()
{

	int arr[8000];
	for (int i = 0; i < 8000; i++)
	{
		arr[i] = 1;
	}
	for (int i = 5; i < 8000; i++)
	{
		arr[i] += arr[i - 5];
	}
	for (int i = 10; i < 8000; i++)
	{
		arr[i] += arr[i - 10];
	}
	for (int i = 25; i < 8000; i++)
	{
		arr[i] += arr[i - 25];
	}
	for (int i = 50; i < 8000; i++)
	{
		arr[i] += arr[i - 50];
	} 
	int x;
	while (cin >> x)
	{
		cout << arr[x] << endl;
	}
}