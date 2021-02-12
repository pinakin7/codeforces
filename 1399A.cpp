#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,a[100];
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		for(int i = 1; i <= n; i++)
		{
			cin >> a[i];
		}
		sort(a + 1, a + n +1);
		bool flag = 1;
		for(int i = 2; i <= n; i++)
		{
			if(a[i] > a[i - 1] + 1)
			{
				cout << "NO" << endl;
				flag = 0;
				break;
			}
		} 
		if(flag) cout << "YES" << endl;
	}
	
	return 0;
    
}
