#include <bits/stdc++.h>
using namespace std;
int n;
int x[101], y[101];
bool choose[101] = {};
double mxArea = -1;
void maxArea(int deep, int l){
    if(deep > 3 || l > n)
        return;
    if(deep == 3){
        int chose[5], it = 0;
        double area = 0;
        for(int i = 0; i < n; ++i){
            if(choose[i]){
                chose[it] = i;
                ++it;
            }
            if(it == 3){
                chose[3] = chose[0];
                chose[4] = chose[1];
                break;
            }
        }
        for(int i =0; i < 3; ++i)
            area += x[chose[i]]*(y[chose[i+1]] - y[chose[i+2]]);
        area = abs(area)/2;
        mxArea = max(mxArea, area);
        return;
    }
    choose[l] = true;
    maxArea(deep+1, l+1);
    choose[l] = false;
    maxArea(deep, l+1);
}
int main(){
    scanf("%d" ,&n);
    for(int i = 0; i < n; ++i){
        scanf("%d%d", &x[i], &y[i]);
    }
    x[n] = x[0], y[n] = y[0];
    maxArea(0, 0);
    printf("%.3f", mxArea);
    return 0;
}
