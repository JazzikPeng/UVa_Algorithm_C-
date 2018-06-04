#include <iostream>
#include <vector>
#include <deque>
#include <cstring>
using namespace std;
int skyline[10000];
int main() {
	int min = 10000;
	int max = 0;
	int x, y, h;
	memset(skyline, 0, sizeof(skyline));
	while (cin >> x >> h >> y) 
	{
		if (x < min)
			min = x;
		if (y > max)
			max = y;
		for (int i = x; i < y; i++) 
		{
			if (skyline[i] < h)
				skyline[i] = h;
		}
	}
	int cambio = skyline[min];
	cout << min << " " << cambio;
	for (int i = min + 1; i <= max; i++) 
	{
		if (cambio != skyline[i])
		{
			cambio = skyline[i];
			cout << " " << i << " " << cambio;
		}
	}
	cout << endl;
	system("pause");
}