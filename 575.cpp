//Zhejian  peng
#include <cstdio>
#include <cmath>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
	char num[1000];
	int k=0, ans, i=0;

	while (true)
	{
		gets_s(num);
		if (strcmp(num,"0")== 0)
		{
			return 0;
		}

		k = strlen(num);
		i = 0;
		ans = 0;
		while (k > 0) {
			ans += (num[i] - '0') * (pow(2, k) - 1);
			k--;
			i++;
		}
		cout << ans << endl;
	}

	return 0;
}
