//zhejian Peng
#include <iostream>

using namespace std;
int main()
{
    int tc;
    cin>>tc;
    register long n,b1,b2,m; // input
    while(tc--)
    {
        cin>>n;
        m = n;
        b1=b2=0;
        while(n)
        {
            b1 = b1 + (n&1),n=n>>1;
        }
        while(m)
        {
            int hex;
            hex=m%10;
            while(hex)
            {
                b2=b2+(hex&1),hex=hex>>1;
            }
            m=m/10;
        }
        cout<<b1<<" "<<b2<<endl;
    }
}