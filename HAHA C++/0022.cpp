#include <bits/stdc++.h>
using namespace std;
int N;
int main()
{
    int i,j;
    scanf("%d",&N);
    if(N==1) printf("*");
    else if(N==2) printf("*\n*");
    else{
        for(i=1;i<(N+1)/2;i++)
        {
            for(j=1;j<=N+N%2-1;j++)
            {
                if(abs((N+1)/2-i)+abs((N+1)/2-j)==(N+1)/2-1) printf("*");
                else printf("-");
            }
            printf("\n");
        }
        printf("*");
        for(i=1;i<=N+N%2-3;i++)
        {
            printf("-");
        }
        printf("*\n");
        if(N%2==0)
        {
            printf("*");
            for(i=1;i<=N+N%2-3;i++)
            {
                printf("-");
            }
            printf("*\n");
        }
        for(i=(N+1)/2-1;i>=1;i--)
        {
            for(j=1;j<=N+N%2-1;j++)
            {
                if(abs((N+1)/2-i)+abs((N+1)/2-j)==(N+1)/2-1) printf("*");
                else printf("-");
            }
            printf("\n");
        }
    }
    return 0;
}