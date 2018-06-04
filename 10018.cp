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

long long reverse(long num)
{
    long reversed=0;
    while(num!=0)
    {
        reversed = reversed*10 + num%10;
        num = num/10;
    }
    return reversed;
}

bool isPalindrome(long num)
{
    if(reverse(num) == num)
    {
        return true;
    }
    return false;
}
int main()
{
    int num_case;
    long num;
    cin>>num_case;
    int count = 0;
    while(num_case--)
    {
        cin>>num;
        
        while(isPalindrome(num)==false || count==0)
        {
            num = num + reverse(num);
            count++;
        }
        cout<<count<<" "<<num<<endl;
        count = 0;
        
    }
    return 0;
}

