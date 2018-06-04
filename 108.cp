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
#include <algorithm>
#define maxn 100+5

using namespace std;



//int maxSum()
//{
//    int max;
//    
//    return max;
//}

int main()
{
    int N;
    int input;
    int sum[101][101];
    int maxVal;
    int a,b,c,d;
    while(cin>>N)
    {
        for(int i=1;i<=N;i++)
        {
            for(int j=1;j<=N;j++)
            {
                cin>>input;
                sum[i][j] =input-sum[i-1][j-1]+sum[i-1][j]+sum[i][j-1];//add all the elements within (i,j);
            }
        }
        maxVal = sum[1][1];
        for(a=1;a<=N;a++)
        {
            for(b=1;b<=N;b++)
            {
                for(c = a;c<=N;c++)
                {
                    for(d = b;d<=N;d++)
                    {
                        maxVal = max(maxVal, sum[c][d] - sum[a-1][d] - sum[c][b-1] + sum[a-1][b-1]);
                    }
                }
            }
        }
        cout << maxVal << endl;
        
    }
    return 0;
}
