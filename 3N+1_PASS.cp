//
//  main.cpp
//  UVa
//
//  Created by Zhejian Peng on 7/13/16.
//  Copyright (c) 2016 Zhejian Peng. All rights reserved.
//

#include <iostream>
using namespace std;
void method(int,int);
int main(int argc, const char * argv[]) {
    int i,j;
    int temp;
    while(cin>>i>>j)
    {
        cout<<i<<" ";
        cout<<j<<" ";
        if(i>j)
        {
            temp = j;
            j = i;
            i = temp;
        }
        method(i,j);
    }

}


void method(int i,int j)
{
    int count = 1;
    int max=1;
    int n;
    for(int x=i;x<=j;x++)
    {
        n = x;
        while (n!=1)
        {
            if(n%2==1)// is odd
            {
                n = (3*n)+1; //n -> 3n+1
            }
            else
            {
                n = n/2; // n = n/2
            }
            count ++;
        }
        if(count>max)
        {
            max = count;
        }
        count = 1;//set count back to 1.
    }
    cout<<max<<endl;
}
//    std::printf("%d ",i);
//    std::printf("%d ",j);
//    std::printf("%d\n",max);