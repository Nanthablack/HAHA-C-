#include <bits/stdc++.h>
using namespace std;
int D,M;
int main()
{
    scanf("%d %d",&D,&M);
    if(M>1) D+=31;
    if(M>2) D+=28;
    if(M>3) D+=31;
    if(M>4) D+=30;
    if(M>5) D+=31;
    if(M>6) D+=30;
    if(M>7) D+=31;
    if(M>8) D+=31;
    if(M>9) D+=30;
    if(M>10) D+=31;
    if(M>11) D+=30;
    D=D%7;
    if(D==0) printf("Wednesday");
    else if(D==1) printf("Thursday");
    else if(D==2) printf("Friday");
    else if(D==3) printf("Saturday");
    else if(D==4) printf("Sunday");
    else if(D==5) printf("Monday");
    else if(D==6) printf("Tuesday");
    return 0;
}