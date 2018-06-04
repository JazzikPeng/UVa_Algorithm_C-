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
    long long b;
    long long a;
    int t;
    int i = 0;
    cin>>t;
    while(i<t)
    {
        cin>>a>>b;
        if(a==b)
        {
            cout<<"="<<endl;
        }
        else if(a>b)
        {
            cout<<">"<<endl;
        }
        else
        {
            cout<<"<"<<endl;
        }
        i++;
    }
    
    return 0;
}



