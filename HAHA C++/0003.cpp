#include<iostream>
using namespace std;
int main(){
    int m,n,temp;
    cin >> m >> n;
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin >> a[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin >> temp;
            a[i][j]+=temp;
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout << a[i][j];
            if(j!=n-1)
                cout << " ";
        }
        if(i!=m-1)
                cout << "\n";
    }
    return 0;
}