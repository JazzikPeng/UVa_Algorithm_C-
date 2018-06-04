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
    int num_case,i;
    long int a,b;
    long int s,d;
    cin>>num_case;
    i = 0;
    while(i<num_case)
    {
        cin>>s>>d;
        if(s<d||(s-d)%2!=0)
        {
            cout<<"impossible"<<endl;
        }
        else
        {
            a = (s-d)/2;
            b = a+d;
            cout<<b<<" "<<a<<endl;
        }
        i++;
    }
    return 0;
}


