#include<iostream>
using namespace std;
int n,num[10001]={0};
int findmax(void);
int main()
{
	int max=0;
	cin >> n;
	int m[n];
	
	for(int i=0;i<n;i++)
	{
		cin >> m[i];
		num[m[i]]+=1;
	}
	
	max=findmax();
	
	for(int i=1;i<10001;i++)
	{
		if(num[i]==max && num[i] != 0)
		{
			cout << i << " ";
		}	
	}
}
int findmax(void)
{
	int max=0;
	for(int i=1;i<10001;i++)
	{
		if(num[i]>max)
		{
			max=num[i];
		}	
	}
	return max;
}