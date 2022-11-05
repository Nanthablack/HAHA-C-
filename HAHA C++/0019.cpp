#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	unsigned short int n;
	unsigned int arr[10][2];
	long int ans = 1000000000;
	cin >> n;
	
	for (unsigned short int i = 0; i < n; i++)
		cin >> arr[i][0] >> arr[i][1];
	
	for (unsigned short int i = 1; i < (1 << n); i++)
	{
		long int S = 1;
		long int B = 0;
		for (unsigned short int j = 0; j < n; j++)
		{
			if ((i & (1 << j)) != 0)
			{
				S *= arr[j][0];
				B += arr[j][1];
				//cout << i << " " << j << endl;
			}
		}
		ans = (abs(S - B) < ans) ? abs(S - B) : ans;
	}
	cout << ans;
}