#include <iostream>
using namespace std;
int Box[256]={0};
int main()
{
    int n,Start=255,End=0;
    cin>>n;
    int i,Hi,Li,Ri;
    for(i=0;i<n;i++)
    {
        cin>>Li;
        cin>>Hi;
        cin>>Ri;
        if(Li<Start)
            Start = Li;
        if(Ri>End)
            End = Ri;
        int j;
        for(j=Li;j<Ri;j++)
        {
            if(Box[j]<Hi)
                Box[j]=Hi;
        }
    }
    for(i=Start;i<=End;i++)
    {
        if(i!=Start)
        {
            if(Box[i]!=Box[i-1])
                cout<<i<<' '<<Box[i]<<' ';
        }
        else
            cout<<i<<' '<<Box[i]<<' ';
    }
    return 0;
}