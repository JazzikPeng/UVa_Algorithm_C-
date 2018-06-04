//Zhejian Peng
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	char arr[1050];
	while(1)
	{
//		cout << "before input" << endl;
		cin >> arr;
		if (arr[0] == '0' && strlen(arr)==1)
		{
			break;
		}
		int num = 0;
//		cout << "input success" << endl;
		for (int i = 0; i <strlen(arr); i++)
		{
			if (i % 2 == 0)
			{
				num = num + (int)arr[i] - '0' ;
//				cout << "break1" << endl;
			}
			else
				num = num - (int)arr[i] + '0';
		}
		if (abs(num) % 11 == 0)
		{
			cout <<arr<<" is a multiple of 11." << endl;
		}
		else
		{
			cout <<arr<< " is not a multiple of 11." << endl;
		}
	}

}