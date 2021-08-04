#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n, k, num;
	cin >> n >> k;
	if (n % 2 == 0)
	{
		if (k <= n / 2)
			num = 1 + 2 * (k - 1);
		else
		{
			num = 2 + 2 * (k - n / 2 - 1);
		}
	}
	else
	{
		if (k <= (n + 1) / 2)
			num = 1 + 2 * (k - 1);
		else
		{
			num = 2 + 2 * (k - (n + 1) / 2 - 1);
		}
	}
	cout << num << endl;
}
