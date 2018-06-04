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
#include<string>

using namespace std;

int isPerfect(int n)
{
    int sum=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum +=i;
        }
    }
    if(sum == n)
        return 0;
    else if(sum > n)
    {
        return 1;
    }
    else
    {
        return -1;
    }
    
}
int main(){
    int n;
    int index;
    int printed = 0;
    while(cin>>n)
    {
        if(printed==0)
        {
            cout<<"PERFECTION OUTPUT"<<endl;
            printed++;
        }
        if(n==0)
        {
            cout<<"END OF OUTPUT"<<endl;
            break;
        }
        index = isPerfect(n);
        if(index==0)
        {
            std::cout.width(5); cout<<right<<n<<"  "<<"PERFECT"<<endl;
        }
        else if(index==1)
        {
            std::cout.width(5); cout<<right<<n<<"  "<<"ABUNDANT"<<endl;
        }
        else
        {
            std::cout.width(5); cout<<right<<n<<"  "<<"DEFICIENT"<<endl;

        }
        
    }
}
