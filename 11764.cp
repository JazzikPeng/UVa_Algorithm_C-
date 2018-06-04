//Zhejian Peng
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    int count = 1;
    while(tc--)
    {
        int high =0, low = 0;
        int num_walls;
        cin>>num_walls;
        int arr[num_walls];
        for(int i=0;i<num_walls;i++)
        {
            cin >> arr[i];
        }
        for(int i=0;i<num_walls-1;i++)
        {
            if(arr[i] - arr[i+1] < 0)
            {
                high ++;
            }
            else if(arr[i] - arr[i+1] > 0)
            {
                low ++;
            }
        }
        cout<<"Case "<<count<<": "<<high<<" "<<low<<endl;
        count++;
    }
    
}