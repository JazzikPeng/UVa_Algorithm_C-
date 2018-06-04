//Zhejian  peng
#include <iostream>
#define MAX 2147483647;
using namespace std;

int main() {
	int n;
	while (cin >> n)
	{
		int count = 0;
		int* arr = new int[n];
//		arr[n] = MAX;
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		for (int i = 1; i < n; i++)
		{
			for(int j=n-1;j>=1;j--)
			{
				if (arr[j - 1] > arr[j])
				{
					int temp = arr[j - 1];
					arr[j-1] = arr[j];
					arr[j] = temp;
					count++;
				}
			}
		}
		cout << "Minimum exchange operations : " << count << endl;
		delete arr;
	}
}
