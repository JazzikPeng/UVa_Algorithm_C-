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


int main(){
    string output;
    string str1 = "``";
    string str2 = "''";
    int count =1;
    int i = 3;
    while(getline(cin, output))
    {
        
//        cout<<"in the loop"<<endl;
        for(int i=0;i<output.size();i++)
        {
            if(output[i] == '"')
            {
                if(count % 2 ==1)//odd
                {
                    output.erase(i, 1);
                    output.insert(i,str1);
                    count++;
                }
                else if(count%2==0)//even
                {
                    output.erase(i, 1);
                    output.insert(i,str2);
                    count++;
                }
            }
        }
//        cout<<"out for loop"<<endl;
    cout<<output<<endl;
    }
//    cout<<"End"<<endl;
    return 0;
}
