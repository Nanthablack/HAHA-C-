#include <bits/stdc++.h>
using namespace std;
int a,b,c;
int main()
{
    int i=0;
    scanf("%d %d %d",&a,&b,&c);
    while(a!=1)
    {
        a=a/2;
        i++;
    }
    while(b!=1)
    {
        b=b/2;
        i++;
    }
    while(c!=1)
    {
        c=c/2;
        i++;
    }
    printf("%d",i);
    return 0;
}