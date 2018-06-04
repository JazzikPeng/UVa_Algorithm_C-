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
    long long diff;
    long long b;
    long long a;
    while(cin>>a>>b)
    {
        if(a>b)
        {
            diff = a-b;
        }
        else
        {
            diff = b-a;
        }
        cout<<diff<<endl;
    }
    
    return 0;
}



