//Zhejian Peng
#include <iostream>
#include <string>
using namespace std;
int main()
{
	int size_matrix = 0;
	while (cin >> size_matrix)
	{
		int arrj = 0, arri = 0;
		int counti=0, countj=0;
		if (size_matrix == 0)
			break;
		int **arr = new int*[size_matrix];
		for (int i = 0; i < size_matrix; i++)
		{
			arr[i] = new int[size_matrix];
		}
		for (int i = 0; i<size_matrix; i++)
		{
			for (int j = 0; j<size_matrix; j++)
			{
				cin >> arr[i][j];
			}
		}
		for (int i = 0; i<size_matrix; i++)
		{
			int sumj = 0;
			for (int j = 0; j<size_matrix; j++)
			{
				sumj = sumj + arr[i][j];
			}
			if (sumj % 2 != 0)
			{
				countj++;
				arri = i;
			}
		}

		for (int j = 0; j<size_matrix; j++)
		{
			int sumi = 0;
			for (int i = 0; i<size_matrix; i++)
			{
				sumi = sumi + arr[i][j];
			}
			if (sumi % 2 != 0)
			{
				counti++;
				arrj = j;
			}
		}
		if (counti > 1 || countj > 1)
		{
			cout << "Corrupt" << endl;
			continue;
		}
		else if (counti == 0 && countj == 0)
		{
			cout << "OK" << endl;
			continue;
		}
		else
		{
			cout << "Change bit (" << arri + 1 << "," << arrj + 1 << ")" << endl;
			continue;
		}
	}
}