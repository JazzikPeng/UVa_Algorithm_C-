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
#include <limits.h>
using namespace std;


int main(){
    long num_case;
    cin>>num_case;//input number of test case
    int length=0;
    int smallest=0;
    int num_swaps=0;
    while(num_case>0)
    {
        cin>>length;
//        if(length <=1)
//        {
//            cout<<"Optimal train swapping takes 0 swaps."<<endl;
//        }
        int arr[length];
        for(int i=0;i<length;i++)
        {
            int temp;
            cin>>temp;
            arr[i] = temp;
        }
        //find the smallest index;
        while(length>0)
        {
            for(int i=0;i<length;i++)
            {
                if(arr[i]<arr[smallest])
                {
                    smallest = i;
                }
            }

            num_swaps += smallest;

            for(int j = smallest; j<length-1;j++)
            {
                arr[j] = arr[j+1];
            }
            arr[length-1]=INT_MAX;
            length --;
        }
        cout<<"Optimal train swapping takes "<<num_swaps<<" swaps."<<endl;
        num_swaps = 0;
//        cout<<"case number "<<num_case<<endl;
        num_case--;
    
    }
    
    return 0;
}
