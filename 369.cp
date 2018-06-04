//Zhejian Peng


#include <iostream>
using namespace std;

unsigned long long factorial(int num)
{
    if(num==0)
        return 1;
    return num*factorial(num-1);
}

bool inArray(int array[], int num)
{
    for(int i=0;i<100;i++)
    {
        if(num == array[i])
            return true;
    }
    return false;
}

unsigned long long combination(int n,int m)
{
    unsigned long long result=1;
    unsigned long long factor;
    int index=0;
    int arr[100] = {1};
    int num;
    int num2;
    if((n-m)>m)
    {
        num = n-m;
        num2 = m;
    }
    else
    {
        num = m;
        num2 = n-m;
    }
    for(int i=n;i>num;i--)
    {
        result = result * i;
        for(int j=1;j<=num2;j++)
        {
            if(result%j==0 && !inArray(arr, j))
            {
                result /=j;
                factor /=j;
                
                arr[index]=j;
                index++;
            }
        }

    }
    
    unsigned long long div=1;
    for(int i=1;i<=num2;i++)
    {
        if(!inArray(arr,i))
        {
            div = div*i;
        }
    }
    result = result/div;
    return result;
}


int main()
{
    int n,m;
    while(cin>>n>>m)
        
    {
        if(n==0 && m==0)
            break;
        long long result=0;
        result = combination(n, m);
        cout<<n<<" things taken "<<m<<" at a time is "<<result<<" exactly."<<endl;
    }
    return 0;
}


