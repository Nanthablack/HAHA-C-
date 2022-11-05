#include <bits/stdc++.h>
using namespace std;
int M,N,ans;
int main()
{
    scanf("%d %d",&M,&N);
    if(N>M) ans=(N+M-1)/M;
    else ans=2;
    printf("%d",ans);
    return 0;
}