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
#include <cctype>
#include <iostream>
using namespace std;

int main() {
    char c;
    while (scanf("%c", &c) != EOF) {
        int count = 0;
        while (1) {
            if (c == '\n')
            {
                break;
//The C library function void isalpha(int c) checks if the passed character is alphabetic.
            }
            else if (isalpha(c))
            {
                while (isalpha(c))
                {
                    scanf("%c", &c);
                }
                count++;
            }
            else
            {
                scanf("%c", &c);
            }
        }
        cout<<count<<endl;
    }
    
    return 0;
}

