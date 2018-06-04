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
#include <cstdio>
#include <queue>
#include <utility>
#include <cstring>
#include <iostream>
#include <functional>

using namespace std;

priority_queue<pair<int, pair<int, int> >,vector<pair<int, pair<int, int> > >,greater<pair<int, pair<int, int> > > > pq;

int main() {
    char input[20];
    int qnum, period, num_task;
    while (scanf("%s", input)) {
        if(strcmp("#", input)!=0){
            scanf("%d %d", &qnum, &period);
            pq.push(pair<int, pair<int, int> >(period, pair<int, int>(qnum, period)));
        }
        else{break;}
    }
    
    cin>>num_task;
//    cout<<"num_task"<<num_task<<endl;
    while (num_task>0) {
        pair<int, pair<int, int> > pr = pq.top();
        pq.pop();
        
        cout<<pr.second.first<<endl;
        
        pr.first += pr.second.second;
        pq.push(pr);
        num_task--;
    }
    
    return 0;
}
