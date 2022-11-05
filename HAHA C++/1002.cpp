#include <bits/stdc++.h>
using namespace std;
int N,i,v,x,l,c;
int main()
{
    int a;
    scanf("%d",&a);
    for(N=1;N<=a;N++)
    {
        if(N/100==1) c++;
        else if(N/100==2) c=c+2;
        else if(N/100==3) c=c+3;
        if((N/10)%10==9)
        {
            x++;
            c++;
        }
        else if((N/10)%10==8)
        {
            l++;
            x+=3;
        }
        else if((N/10)%10==7)
        {
            l++;
            x+=2;
        }
        else if((N/10)%10==6)
        {
            l++;
            x+=1;
        }
        else if((N/10)%10==5)
        {
            l++;
        }
        else if((N/10)%10==4)
        {
            l++;
            x++;
        }
        else if((N/10)%10==3)
        {
            x+=3;
        }
        else if((N/10)%10==2)
        {
            x+=2;
        }
        else if((N/10)%10==1)
        {
            x++;
        }
        if(N%10==9)
        {
            x++;
            i++;
        }
        else if(N%10==8)
        {
            v++;
            i+=3;
        }
        else if(N%10==7)
        {
            v++;
            i+=2;
        }
        else if(N%10==6)
        {
            v++;
            i+=1;
        }
        else if(N%10==5)
        {
            v++;
        }
        else if(N%10==4)
        {
            v++;
            i++;
        }
        else if(N%10==3)
        {
            i+=3;
        }
        else if(N%10==2)
        {
            i+=2;
        }
        else if(N%10==1)
        {
            i++;
        }
    }
    printf("%d %d %d %d %d",i,v,x,l,c);
    return 0;
}