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

#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
#include<queue>
#include<string>
#include<map>
#include<cmath>
#include<sstream>
using namespace std;
int main()
{
    ostringstream oss; //Import this convert.
    long long caseNum;
    long long count=1LL;
    cin>>caseNum;
    unsigned long long int inputA;
    unsigned long long int inputB;
    string result;
    while(caseNum--)
    {
        cin>>inputA>>inputB;
        long long or_ = inputA;
        long long and_ = inputA;
        long long k,i;
        // Or calculation:
        if(inputA==inputB)//same input;
        {
            or_ = inputA;
            and_ = inputB;
        }
        else// input need to be two different number.
        {
            long long lengthB = log2(inputB)+1LL;
            or_ = 0LL;
            for(i=lengthB-1LL; i>=0LL; i--)
            {
                k=1LL<<i;
                if((inputA&k)==(inputB&k))
                {
                    if(((inputB&k)>>i)==1LL)
                        or_=or_|k;
                }
                else
                {
                    and_=or_;
                    while(1)
                    {
                        or_=or_|k;
                        i--;
                        if(i<0LL)
                            break;
                        k=1LL<<i;
                    }
                    break;
                }
            }
        }
        cout<<"Case "<<count<<": "<<or_<<" "<<and_<<endl;
//        result = result + oss.str();
//        oss.str("");
        count++;
    }
 //   cout<<result;

    return 0;
}
//string toBinary(long n)
//{
//    std::string r;
//    while(n!=0) {r=(n%2==0 ?"0":"1")+r; n/=2;}
//    return r;
//}


