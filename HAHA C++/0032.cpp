#include <bits/stdc++.h>
using namespace std;
int N,num[1010];
int main()
{
    int i,j,k;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<N;i++)
    {
        for(j=i;j<N;j++)
        {
            if(num[i]>num[j])
            {
                k=num[i];
                num[i]=num[j];
                num[j]=k;
            }
        }
    }
    for(i=0;i<N;i++)
    {
        if(num[i]!=0)
        {
            printf("%d",num[i]);
            k=i;
            break;
        }
    }
    for(i=0;i<N;i++)
    {
        if(i!=k) printf("%d",num[i]);
    }
    return 0;
}