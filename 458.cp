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
    string code;
    while(getline(cin,code))
    {
        for (string::size_type i = 0; i < code.length(); i++)
        {
            code[i] -= 7;
        }
        cout<<code<<endl;
    }
    return 0;
}



