//Zhejian Peng
#include <cstdio>
#include <bitset>
#include <iostream>
using namespace std;

bitset<2000005> bs;
/*The class template bitset represents a fixed-size sequence of N bits. Bitsets can be manipulated by standard logic operators and converted to and from strings and integers.
*/

int main() {
    int n, m, s, e, itv;
    bool conflict;
    while (cin>>n>>m)
    {
        if(n==0 && m==0) break;
        conflict = false;
        for (int i = 0; i < n; i++)
        {
            cin>>s>>e;
            if (!conflict)
            {
                for (int i = 2 * s + 1; i <= 2 * e; i++)
                {
                    if (bs[i])
                    {
                        conflict = true;
                        break;
                    }
                    bs.set(i);//sets bits to true or given value
                }
            }
        }
        
        for (int i = 0; i < m; i++)
        {
            cin>>s>>e>>itv;
            if (!conflict)
            {
                while (1)
                {
                    for (int i = 2 * s + 1; i <= 2 * e; i++)
                    {
                        if (bs[i])
                        {
                            conflict = true;
                            break;
                        }
                        bs.set(i);
                    }
                    s += itv;
                    e += itv;
                    if (s > 1000000 && e > 1000000)
                        break;
                    else if (e > 1000000)
                        e = 1000000;
                }
            }
        }
        
        if (conflict)
            cout<<"CONFLICT"<<endl;
        else
            cout<<"NO CONFLICT"<<endl;
        
        for (int i = 0; i < 2000005; i++)
        {
            bs.reset(i);
        }
    }
    
    return 0;
}

