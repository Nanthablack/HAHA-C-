#include <bits/stdc++.h>
using namespace std;
int L,N;
char pre[1010],comp[1010];
int main()
{
    int j,fail;
    scanf("%d %d",&L,&N);
    scanf("%s",pre);
    N--;
    while(N>0)
    {
        fail=0;
        scanf("%s",comp);
        for(j=0;j<L;j++)
        {
            if(pre[j]!=comp[j]) fail++;
        }
        if(fail>2)
        {
            printf("%s",pre);
            break;
        }
        strcpy(pre,comp);
        N--;
    }
    while(N>0)
    {
        scanf("%s",pre);
        N--;
    }
    if(fail<=2)
    {
        printf("%s",pre);
    }
    return 0;
}