//Zhejian Peng
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <stdio.h>
#include <iomanip>
#include <string.h>

using namespace std;

int main()
{
    int tc;
    cin>>tc;
    int count=tc;
    while(tc--)
    {
        double init, change, result;
        cin>>init>>change;
        init = init*(9.0/5.0) + 32.0;
        result = (init+change - 32.0)*5.0/9.0;
        if( (result + 0.005) >= (result + 0.01) )
        {
            cout<<fixed;
            cout<<setprecision(2);
            cout <<"Case "<<count-tc<<": "<< result+0.01<<endl;
        }
        else
        {
            cout<<fixed;
            cout<<setprecision(2);
            cout <<"Case "<<count-tc<<": "<< result<<endl;
        }
    }
}