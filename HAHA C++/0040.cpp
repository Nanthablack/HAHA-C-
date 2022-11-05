#include<bits/stdc++.h>
using namespace std;
bool check(string a){
	int l = a.size();
	if(a[l-1]=='1'||a[l-1]=='3'||a[l-1]=='5'||a[l-1]=='7'||a[l-1]=='9')
		return true;
	if(l==1 && a[0]=='2') 
		return true;
	return false;
}
int main(){
	int n;
	cin >> n;
	while(n--){
		string a;
		cin >> a;
		if(check(a)) printf("T\n");
		else printf("F\n");
	}
}