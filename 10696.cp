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

#include <cstdio>
#include <cctype>
#include <iostream>
using namespace std;
int f91(int num);

int main() {
    int input;
    while(cin>>input && input !=0)
    {
        cout<<"f91"<<"("<<input<<") = "<<f91(input)<<endl;
        
    }
    return 0;
}

int f91(int num)
{
    if(num<=100)
    {
        return f91(f91(num+11));
    }
    else if(num>=101)
    {
        return num-10;
    }
    return 0;
}
