//Zhejian Peng
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int days;
        cin>>days;
        int count=0;
        int num_party;
        cin>>num_party;
        int arr[num_party];
        int *index_arr = new int[days+1];
        for(int i = 0;i<=days;i++)
        {
            index_arr[i] = 0;
        }
        for(int i=0;i<num_party;i++)
        {
            cin>>arr[i];
        }
        int days_arr[days+1];
        days_arr[0] = 0;
        int index = 1;
        while(index<=days)
        {
            for(int j=0;j<num_party;j++)
            {
                if(index%arr[j]==0)
                {
                    if((index-6)%7!=0 && index%7 !=0)
                    {
                        index_arr[index] = index;
                        continue;
                    }
                }
            }
            index++;

        }
        for(int i = 0;i<=days;i++)
        {
            if(index_arr[i]!=0)
            {
                count++;
            }
        }
        cout<<count<<endl;
        
    }
    return 0;
}