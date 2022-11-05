#include<stdio.h>
int q=1,w=1,s=0;
int year,wdie,sdie;
int worker[24];
int total[24];
int i;
int main()
{
   
    do
    {
        
        scanf("%d",&year);
        if(year>=1 && year<=24)
        {
            q=1,w=1,s=0;
            for(i=1;i<=year;i++)
            {   
                wdie=w;
                sdie=s;
                s+=w;
                w+=s+q;
                w-=wdie;
                s-=sdie;
                worker[i]=w;
                total[i]=q+w+s;
                
                if(i==year)
                {
                    printf("%d %d\n",worker[i],total[i]);
                }
            }
        }
        else if(year==-1)
        {
            break;
        }
        
    } while (1);
    
	return 0;
}
 