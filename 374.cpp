//Zhejian Peng
#include <iostream>
#include <math>
#include <algorithm>
using namespace std;

bool isJolly(int arr[], int size)
{
	int newArr[size - 1];
	for (int i = 0; i < size-1; i++)
	{
		newArr[i] = abs(arr[i] - arr[i + 1]);
	}
	sort(newArr, newArr + size - 1);
	if (newArr[0] == 1 && newArr[size - 1] == size - 1);
		return true;
	else
		return false;
}

int main()
{
	int num;
	while (cin >> num)
	{
		int arr[num];
		for (int i = 0; i < num; i++)
		{
			cin >> arr[i];
		}
		if (isJolly(arr, num))
		{
			cout <<"Jolly"<<endl;
		}
		else 
			cout << "Not jolly" << endl;
	}

	return 0;
	system("pause");
}