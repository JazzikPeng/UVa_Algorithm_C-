//Zhejian Peng


#include <stdio.h>

char arr[129];
int main() {
    unsigned tc;
    unsigned ch;
    scanf("%u", &tc);
    getchar();
    while(tc--)
    {
        bool flag = true;
        int num1=0,num2=0,num3=0,num4=0;
//        int checker = -1;
        while((ch=getchar())!='\n')
        {
            if(ch == ' ')
            {
//                printf("Yes\n");
                continue;
            }
            if(ch=='(')
                num1++;
            else if(ch==')')
            {
                num2++;
                if(num2>num1)
                {
                    flag = false;
                }
            }
            else if(ch=='[')
                num3++;
            else if(ch==']')
            {
                num4++;
                if(num4>num3)
                    flag = false;
            }
//            checker ++;
        }
        if(num1!=num2 || num3!=num4 || !flag)
        {
            printf("No\n");
        }
        else
        {
            printf("Yes\n");
        }
    }
    return 0;
}

/*    cin>>tc;
    string str;
    while(tc--)
    {
        //()40,41
        int num1=0;
        int num2=0;
        //[]91,93
        int num3=0;
        int num4=0;
        cin>>str;
        if(str[0] ==' ')
        {
            cout<<"Yes"<<endl;
        }

        for(int i=0;i<str.size();i++)
        {
         //   cout<<sizeof(str)/sizeof(str[0])<<endl;
            if(str[i]==40)
                num1++;
            else if(str[i]==41)
                num2++;
            else if(str[i]==91)
                num3++;
            else if(str[i]==93)
                num4++;
        }
        if(num1==num2 && num3 == num4)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
            
    }
    return 0;
}*/

