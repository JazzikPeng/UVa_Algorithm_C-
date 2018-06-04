#include <iostream>
using namespace std;

int mini(int a, int b)
{
	if (a <= b)
	{
		return a;
	}
	else
		return b;
}

int main() {
	//BGC
	int bgc, bcg, gbc, gcb, cbg, cgb;
	int min;
	int num[9];
	while (cin>>num[0])
	{
		for (int i = 1; i < 9; i++)
		{
			cin >> num[i];
		}
/*		for (int i = 0; i < 9; i++)
		{
			cout << num[i];
		}
		cout << endl;
*/
		//BGC
		bgc = num[3] + num[6] + num[1] + num[7] + num[2] + num[5];
//		cout << bgc << endl;
		bcg = num[3] + num[6] + num[2] + num[8] + num[1] + num[4];
//		cout << bcg << endl;
		gbc = num[4] + num[7] + num[0] + num[6] + num[2] + num[5];
//		cout << gbc << endl;
		gcb = num[4] + num[7] + num[2] + num[8] + num[0] + num[3];
//		cout << gcb << endl;
		cbg = num[5] + num[8] + num[0] + num[6] + num[1] + num[4];
//		cout << cbg << endl;
		cgb = num[5] + num[8] + num[1] + num[7] + num[0] + num[3];
//		cout << cgb << endl;
		min = mini(mini(mini(mini(mini(bgc, bcg), gbc), gcb), cbg), cgb);
//		cout << min << endl;
		// Print it in alphabetical order
		if (bcg == min)
		{
			cout << "BCG " << min << endl;
		}
		else if (bgc == min)
		{
			cout << "BGC " << min << endl;

		}		
		else if (cbg == min)
		{
			cout << "CBG " << cbg << endl;
		}
		else if (cgb == min)
		{
			cout << "CGB " << cgb << endl;
		}
		else if (gbc == min)
		{
			cout << "GBC " << min << endl;

		}
		else if (gcb == min)
		{
			cout << "GCB " << min << endl;
		}
	}
	return 0;
//	system("pause");
}
