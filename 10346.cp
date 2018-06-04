//Zhejian Peng


#include <iostream>
using namespace std;
int smoke(int n, int k)
{
    static int count;
    if(n<k)
    {
        if((count+=n)>=k)
        {
            int temp = count;
            count = 0;
            return n + temp/k;
            
        }
        else
        {
            count = 0;
            return n;
        }
    }
    count += n % k;
    return n + smoke(n/k, k);
}
int main()
{
    int n,k;
    int result = 0;
    while(cin>>n>>k)
    {
        result = smoke(n,k);
        cout<<result<<endl;
    }
    return 0;
}


