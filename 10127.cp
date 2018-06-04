//Zhejian Peng
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    while (cin>>n)
    {
        int num = 0;
        int value = 1%n;
//        cout<<value<<endl;
        while (value)
        {
            num++;
            value = ((value * 10) + 1)%n;
        }
        cout<<num+1<<endl;
    }
}