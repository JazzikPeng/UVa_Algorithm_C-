//Zhejian Peng


#include <iostream>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int amp;
        int wavelength;
        cin>>amp;
        cin>>wavelength;
        for(int a=0;a<wavelength;a++)
        {
            for(int i=1;i<=amp;i++)
            {
                for(int j=0;j<i;j++)
                {
                    cout<<i;
                }
                cout<<endl;
            }
            
            for(int i=amp-1;i>0;i--)
            {
                for(int j=0;j<i;j++)
                {
                    cout<<i;
                }
                cout<<endl;
            }
            cout<<endl;

        }
    }
    return 0;
}


