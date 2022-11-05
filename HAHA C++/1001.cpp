#include <bits/stdc++.h>
using namespace std;
int M,N,ground[30],brick;
char table[30][30];
int main()
{
    int i,j;
    scanf("%d %d",&M,&N);
    for(i=M;i>0;i--)
    {
        for(j=0;j<N;j++)
        {
            scanf(" %c",&table[i][j]);
            if(table[i][j]=='O'&&ground[j]<i) ground[j]=i;
        }
    }
    for(i=0;i<N;i++)
    {
        scanf("%d",&brick);
        j=ground[i]+1;
        while(brick--)
        {
            if(j>M) break;
            table[j][i]='#';
            j++;
        }
    }
    for(i=M;i>0;i--)
    {
        for(j=0;j<N;j++)
        {
            printf("%c",table[i][j]);
        }
        printf("\n");
    }
    return 0;
}