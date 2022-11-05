#include <bits/stdc++.h>
using namespace std;
int nugget;
int main()
{
    int i,gg=0;
    scanf("%d",&nugget);
    for(i=1;i<=nugget;i++)
    {
        if(i%6==0&&i>=6) printf("%d\n",i);
        else if(i%6==1&&i>=49) printf("%d\n",i);
        else if(i%6==2&&i>=20) printf("%d\n",i);
        else if(i%6==3&&i>=9) printf("%d\n",i);
        else if(i%6==4&&i>=40) printf("%d\n",i);
        else if(i%6==5&&i>=29) printf("%d\n",i);
        if(i%6==0&&i>=6) gg++;
        else if(i%6==1&&i>=49) gg++;
        else if(i%6==2&&i>=20) gg++;
        else if(i%6==3&&i>=9) gg++;
        else if(i%6==4&&i>=40) gg++;
        else if(i%6==5&&i>=29)gg++;
    }
    if(gg==0) printf("no");
    return 0;
}
