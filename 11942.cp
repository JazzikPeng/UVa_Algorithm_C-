//Zhejian Peng
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    if(tc>=1)
    {
        cout<<"Lumberjacks:"<<endl;
    }
    int arr[10];
    while(tc--)
    {
        bool order = false;
        for(int i=0;i<10;i++)
        {
            cin>>arr[i];
        }
        if(is_sorted(begin(arr), end(arr)))
        {
            order = true;
        }
        int arr2[10];
        for(int i=0;i<10;i++)
        {
            arr2[9-i] = arr[i];
        }
        
        if(is_sorted(begin(arr2), end(arr2)))
        {
            order = true;
        }
        
        if(order)
        {
            cout<<"Ordered"<<endl;
        }
        else
        {
            cout<<"Unordered"<<endl;
        }
    }
}