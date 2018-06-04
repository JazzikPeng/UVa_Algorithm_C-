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
    string num1,num2;
    cin>>num1;
    cin>>num2;
    while(num2!="0"){
        long length1,length2;
        int carry = 0;
        int sum=0;
        if(num1.size()>num2.size()){
            length1=num1.length();
            length2=num2.length();
        }
        else{
            length1=num2.length();
            length2=num1.length();
            string temp=num1;
            num1=num2;
            num2=temp;
        }
        
        for(long i = length1-1, j=length2-1;i> -1;i--){
            num1[i]= ((num1[i] - '0') + carry)+'0';
            if(j>-1){
                sum= (num1[i]- '0') + (num2[j]- '0');
                j--;
            }else{
                sum= (num1[i]- '0');
            }
            if(sum>=10){
                num1[i]=(sum-10)+'0';
                carry=1;
            }else{
                num1[i]=sum+'0';
                carry=0;
            }
            
        }
        if (carry == 1){
            num1.insert(0,"1");
        }
        cin>>num2;
    }
    cout<<num1<<endl;
    
    return 0;
}


//
//string add(string num1, string num2)
//{
//    num1 = '0' + num1;
//    num2 = '0' + num2;
//    string sum;
//
//    unsigned long sum_length;//w/e longer string will be the length of the sum;
//    sum_length = num1.size()>=num2.size() ? num1.length():num2.length();
//
//    //    cout<<num1.length()<<endl;
//
//    unsigned long n =0;
//    bool flag = num1.length() - num2.length() > 0;
//    if(flag)
//    {
//        n =num1.length() - num2.length();
//        
//    }
//    else
//    {
//        n = num2.length() - num1.length();
//    }
//    
//    //insert 0;
//    for(int i=0;i<n;i++)
//    {
//        if(flag)
//        {
//            num2 = '0' + num2;
//            //            cout<<num2<<endl;
//        }
//        else
//        {
//            num1 = '0' + num1;
//        }
//        
//    }
//    
//    for(int i=0;i<sum_length;i++)
//    {
//        sum[i] = num1[i]+ num2[i];
//        //        cout<<num1[i]<<" "<<num2[i]<<endl;
//        //        cout<<"num1+ num2: "<<num1[i]+num2[i]<<endl;
//    }
//    //    cout<<"cout"<<endl;
//    for(int i=0;i<sum_length;i++)
//    {
//        if(num1.length()==num2.length())
//            sum[i] = sum[i]-48*2;
//        else
//            sum[i] = sum[i]-48;
//    }
//    for(long i=sum_length-1;i>=0;i--)
//    {
//        if(sum[i]>=10)
//        {
//            sum[i] = sum[i]%10;
//            sum[i-1] = sum[i-1]+1;
//        }
//    }
//    if(sum[0]==0)
//    {
//        for(int i=1;i<sum_length;i++)
//        {
//            cout<<(int)sum[i];
//        }
//    }
//    else
//    {
//        for(int i=0;i<sum_length;i++)
//        {
//            cout<<(int)sum[i];
//        }
//    }
//    cout<<endl;
//    return sum;
//}
//
//int main()
//{
//    string num2, num1, sum;
//    cin>>num1>>num2;
//    sum = add(num1,num2);
//    long sum_length = num1.size()>=num2.size() ? num1.length():num2.length();
//    
//    
//    
//    if(sum[0]==0)
//    {
//        for(int i=1;i<sum_length;i++)
//        {
//            cout<<(int)sum[i];
//        }
//    }
//    else
//    {
//        for(int i=0;i<sum_length;i++)
//        {
//            cout<<(int)sum[i];
//        }
//    }
//    
//    return 0;
//}
