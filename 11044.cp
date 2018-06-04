//Zhejian Peng
#include <iostream>

using namespace std;
int main()
{
    int n,m;
    int tc;
    cin>>tc;
    while(tc--)
    {
        cin>>n>>m;
        int count=0;
        count = (n/3) * (m/3);
        cout << count<<endl;
    }
}