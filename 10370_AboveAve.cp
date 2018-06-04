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
    int num_case;
    int N;
    double total=0;
    double ave;
    double percentage;
    int numAboveAve=0;
    cin>>num_case;
//    cout<<"numCase"<<num_case<<endl;//test1
    while(num_case>0)
    {
        cin>>N;
//        cout<<"N "<<N<<endl;// test
        double grade;
        double gradeArray[N];
        int temp = N;
        while(temp>0)
        {
            cin>>grade;
//            cout<<"grade"<<grade<<endl;//test2
            gradeArray[N-temp] = grade;
            temp--;
        }
        for(int i=0;i<N;i++)
        {
            total = total + gradeArray[i];
        }
        ave = total/(double)N;
        for(int i=0;i<N;i++)
        {
            if(gradeArray[i]>ave)
            {
                numAboveAve++;
            }
        }
        percentage = (double)numAboveAve/(double)N;
        printf("%0.3f%%\n", percentage*100.00);
        grade =0;
        total = 0;
        numAboveAve=0;
        num_case--;
    }
    return 0;
}


