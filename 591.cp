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


int main(){
    int counter=0;
    while(1){
        int count=0;
        int a=0;
        int ave=0, sum=0, moves=0;
        cin>>count;
        if(count ==0)
        {
            break;
        }
        int arr[count];
        while(count--)
        {
            int num;
            cin>>num;
            arr[a]=num;
            a++;
        }
        for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
        {
            sum += arr[i];
    //        cout<<sum<<endl;
        }
        
        ave = sum/(sizeof(arr)/sizeof(arr[0]));
        
        for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
        {
            if(arr[i]<ave)
            {
                moves += (ave - arr[i]);
    //            cout<<ave-arr[i]<<endl;
            }
        }
        counter++;
        cout<<"Set #"<<counter<<endl;
        cout<<"The minimum number of moves is "<<moves<<"."<<endl;
        cout<<endl;
    }
    return 0;
}
