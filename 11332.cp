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
#include <iostream>
using namespace std;

int main()
{
    long long x = 0;
    while(cin>>x && x!=0)
    {
        int sum = 0;
        int count = 11;
        while(count--)
        {
            sum = sum + x%10 ;
            x =  (x - x%10)/10;

        }
        while(sum >= 10)
        {
            sum = sum%10 + (sum - sum%10)/10;
        }
        cout<<sum<<endl;
    }
    return 0;
}
