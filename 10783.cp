//  main.cpp
//  UVa
//
//  Created by Zhejian Peng on 7/13/16.
//  Copyright (c) 2016 Zhejian Peng. All rights reserved.
//
//
//  or.cpp
//
//
//  Created by Zhejian Peng on 7/18/16.
//
//

#include<iostream>

using namespace std;
int main()
{
    int b;
    int a;
    int t;
    int i = 0;
    cin>>t;
    while(i<t)
    {
        int oddSum;
        cin>>a>>b;
        for(int j=a;j<=b;j++)
        {
            if(j%2==0)
            {
                
            }
            else
            {
                oddSum +=j;
            }
        }
        cout<<"Case "<<i+1<<": "<<oddSum<<endl;
        oddSum = 0;
        i++;
    }
    return 0;
}



