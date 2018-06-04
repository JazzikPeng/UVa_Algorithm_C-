#include<stdio.h>
#include<string.h>

int main()
{
    char re[40];
    int len;
    while(scanf("%s",&re)==1)
    {
        len=strlen(re);
        for(int i=0;i<len;i++)
        {
            while(1)
            {
                if(re[i] == 'A' || re[i] == 'B' || re[i]=='C'){printf("2"); break;}
                if(re[i] == 'D' || re[i] == 'E' || re[i]=='F'){printf("3"); break;}
                if(re[i] == 'G' || re[i] == 'H' || re[i]=='I'){printf("4"); break;}
                if(re[i] == 'J' || re[i] == 'K' || re[i]=='L'){printf("5"); break;}
                if(re[i] == 'M' || re[i] == 'N' || re[i]=='O'){printf("6"); break;}
                if(re[i] == 'P' || re[i] == 'Q' || re[i]=='R' || re[i]== 'S'){printf("7"); break;}
                if(re[i] == 'T' || re[i] == 'U' || re[i]=='V'){printf("8"); break;}
                if(re[i] == 'W' || re[i] == 'X' || re[i]=='Y' || re[i]== 'Z'){printf("9"); break;}
                else{printf("%c", re[i]); break;}
            }
        }
        printf("\n");
        
    }
    return 0;
}