//Zhejian  peng
#include <iostream>
using namespace std;

int main() 
{
	int n;
	cin >> n;
	while (n--)
	{
		int tc;
		cin >> tc;
		int res = 0;
		while (tc--)
		{
			int a, b, c;
			cin >> a >> b >> c;
			res += a*c;
		}
		cout << res << endl;
	}
}
