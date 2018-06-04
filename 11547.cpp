#include <cmath>
#include <iostream>
using namespace std;

int num[9];
int n = 9;
int main() {
	while (n--)
	{
		cout << "enter" << endl;3

		for (int i = 0; i < 9; i++)
		{
			cin >> num[i];
		}
	}
	for (int i = 0; i < 9; i++)
	{
		cout << "result" << num[i] << endl;
	}
	system(pause);
	return 0;
}
