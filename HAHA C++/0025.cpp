#include <bits/stdc++.h>
using namespace std;
char in1[110],in2[110],ope;
int len1,len2;
int main()
{
    int i;
    scanf("%s %c %s",in1,&ope,in2);
    len1=strlen(in1);
    len2=strlen(in2);
    if(ope=='*')
    {
        printf("1");
        for(i=1;i<=len1+len2-2;i++)
        {
            printf("0");
        }
    }
    else if(ope=='+')
    {
        if(len1==len2)
        {
            printf("2");
            for(i=1;i<=len1-1;i++)
            {
                printf("0");
            }
        }
        else
        {
            printf("1");
            for(i=1;i<=abs(len1-len2)-1;i++)
            {
                printf("0");
            }
            printf("1");
            for(i=1;i<=min(len1,len2)-1;i++)
            {
                printf("0");
            }
        }
    }
    return 0;
}