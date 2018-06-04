//Zhejian Peng
#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

bool isJolly(int arr[], int size)
{
    bool flag = true;
    int newArr[size - 1];
    for (int i = 0; i < size - 1; i++)
    {
        newArr[i] = abs(arr[i] - arr[i + 1]);
    }
    sort(newArr, newArr + size - 1);
//    cout<<"size "<<size<<endl;
//    cout<<"newArr"<<newArr[0]<<" "<<newArr[1]<<endl;
    for (int i = 0; i < size - 2; i++)
    {
        if(newArr[i]==newArr[i+1])
        {
            flag = false;
        }
    }
    if (size==1||(newArr[0] == 1 && newArr[size - 2] == (size - 1) && flag))
        return true;
    else
        return false;
}

int main()
{
    int num;
    while (cin >> num)
    {
        int arr[num];
        for (int i = 0; i < num; i++)
        {
            cin >> arr[i];
        }
//        cout<<"isJolly "<<isJolly(arr, num)<<endl;
        if (isJolly(arr, num))
        {
            cout << "Jolly" << endl;
        }
        else
        {
            cout << "Not jolly" << endl;
        }
    }
    
    return 0;
}
