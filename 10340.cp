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
#include <string>
using namespace std;

int main()
{
    string str1, str2;
    int str1Size;
    int count;
    while(cin>>str1>>str2)
    {
        str1Size = str1.length();
        for(int i = 0; i<str2.length();i++)
        {
            if(str2[i] == str1[count])
            {
//              cout<<str1[count]<<endl;
                count++;
            }
        }
        if(str1.length()>str2.length())
        {
            cout<<"No"<<endl;
        }
        else if(count == str1Size)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
        count =0;
    }
    return 0;
}

