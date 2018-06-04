//  main.cpp
//  UVa
//
//  Created by Zhejian Peng on 7/13/16.
//  Copyright (c) 2016 Zhejian Peng. All rights reserved.
//

#include <iostream>
#include <sstream>
using namespace std;
std::ostringstream oss;
int main(int argc, const char * argv[]) {
    int v;
    int t;
    string output;
    while(cin>>v>>t)
    {
        int distance;
        distance = 2*v*t;
        oss<<distance<<endl;
        output +=oss.str();
        oss.str("");
    }
    cout<<output;
    
}

//string toBinary(int n)
//{
//    std::string r;
//    while(n!=0) {r=(n%2==0 ?"0":"1")+r; n/=2;}
//    return r;
//}


