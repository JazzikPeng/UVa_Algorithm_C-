//  main.cpp
//  UVa
//
//  Created by Zhejian Peng on 7/13/16.
//  Copyright (c) 2016 Zhejian Peng. All rights reserved.
//

#include <iostream>
using namespace std;
bool isUgly(int);
int main(int argc, const char * argv[]) {
    int count=0;
    int num=0;
    while(count<1500){
        if(isUgly(num))
        {
            count ++;
        }
        num ++;
    }
    int ugly1500 = num-1;
    cout<<"The 1500'th ugly number is "<<ugly1500<<"."<<endl;

}

bool isUgly(int ugly_num)
{
    if(ugly_num==1)
    {
        return true;
    }
    else if(ugly_num==0)
    {
        return false;
    }
    while(ugly_num!=1)
    {
        if(ugly_num%2==0)
        {
            ugly_num = ugly_num/2;
        }
        else if(ugly_num%3==0)
        {
            ugly_num = ugly_num/3;
        }
        else if(ugly_num%5==0)
        {
            ugly_num = ugly_num/5;
        }
        else
        {
            break;
        }
        if(ugly_num==1)
        {
            return true;
        }
    }
    return false;
}
