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

#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    unsigned long int a,b,x,y;
    int count;
    while(cin>>a>>b)
    {
        count=0;
        if(a==0 && b==0) break;
        for(int i=0;i<10;i++)
        {
            x=a%10;
            y=b%10;
            if(x+y>=10)
            {
                count++;
                do
                {
                    a=a/10;
                    b=b/10;
                    x=a%10;
                    y=b%10;
                    if(x+y==9)
                        count++;
                    else if(x+y>9)
                        count++;
                    
                }while(x+y>=9);
            }
            a=a/10;
            
            b=b/10;
            if(a==0 && b==0) break;
        }
        if(count==0)
            printf("No carry operation.\n");
        else if(count==1)
            printf("%d carry operation.\n",count);
        else
            printf("%d carry operations.\n",count);
    }
    return 0;
}


