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
    
    long long num_lines;
    long long pizza=0;
    while(cin>>num_lines)
    {
        if(num_lines <0)
        {
            break;
        }
        else
        {
            pizza =  (1+num_lines)*num_lines/2;
            cout<<pizza + 1<<endl;
        }
        pizza=0;
    }
}

