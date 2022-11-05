#include <bits/stdc++.h>
using namespace std;
char inp[1000010];
unsigned long long int sum1,sum2,sum,leng;
int main()
{
    int i,j;
    scanf("%s",inp);
    leng=strlen(inp);
    for(i=0;i<leng;i=i+2)
    {
        sum+=inp[i]%3;
        sum1=(sum1+inp[i]-48)%11;
    }
    for(i=1;i<leng;i=i+2)
    {
        sum+=inp[i]%3;
        sum2=(sum2+inp[i]-48)%11;
    }
    if(leng%2==0) printf("%llu %llu",(sum)%3,((sum2-sum1)+11)%11);
    else printf("%llu %llu",(sum)%3,((-sum2+sum1)+11)%11);
    return 0;
}