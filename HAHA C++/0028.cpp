#include <bits/stdc++.h>
using namespace std;
char name[5][110];
int table[5][5],win[5],lose[5],score[5];
int main()
{
    int i,j,k;
    char l[101];
    for(i=0;i<4;i++)
    {
        scanf("%s",name[i]);
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&table[i][j]);
            win[i]+=table[i][j];
            lose[j]+=table[i][j];
        }
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(i==j) continue;
            if(table[i][j]>table[j][i]) score[i]+=3;
            else if(table[i][j]==table[j][i]) score[i]+=1;
        }
    }
    for(i=0;i<4;i++)
    {
        for(j=i;j<4;j++)
        {
            if(score[i]<score[j])
            {
                k=score[i];
                score[i]=score[j];
                score[j]=k;
                strcpy(l,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],l);
            }
            else if(score[i]==score[j]&&win[i]-lose[i]<win[j]-lose[j])
            {
                k=score[i];
                score[i]=score[j];
                score[j]=k;
                strcpy(l,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],l);
            }
            else if(score[i]==score[j]&&win[i]<win[j])
            {
                k=score[i];
                score[i]=score[j];
                score[j]=k;
                strcpy(l,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],l);
            }
        }
    }
    for(i=0;i<4;i++)
    {
        printf("%s %d\n",name[i],score[i]);
    }
    return 0;
}