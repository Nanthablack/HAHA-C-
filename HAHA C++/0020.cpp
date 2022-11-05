#include <iostream>
using namespace std;
int x;
int a[5];
int main()
 {
     for(int i=0;i<5;i++)
     {
         for(int j=0;j<4;j++)
         {
              cin >> x;
              a[i]+=x;
         }
     }
     //if(a[1]>a[2])
     int M,y,o,j;
     M=0;
     for(j=0 ;j<5 ;j++)
    {
        if(a[j]>M)
        {
           M =a[j];
           o = j;
        }
    }
    cout <<o+1<< " "<< M;
    return 0;
 }