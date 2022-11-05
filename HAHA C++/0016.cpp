#include<iostream>
#include<string>
using namespace std;
int main(){
    int s_a=0,s_b=0,s_g=0,c,m;
    cin >> c;
    string s;
    cin >> s;
    char a[4]={'A','B','C'},b[5]={'B','A','B','C'},g[7]={'C','C','A','A','B','B'};
    for(int i=0;i<c;i++){
        if(s[i]==a[i%3])
            s_a++;
        if(s[i]==b[i%4])
            s_b++;
        if(s[i]==g[i%6])
            s_g++;
    }
    m=max(max(s_a,s_b),s_g);
    cout << m;
    if(m==s_a)
        cout << "\nAdrian";
    if(m==s_b)
        cout << "\n" << "Bruno";
    if(m==s_g)
        cout << "\n" << "Goran";
    return 0;
}