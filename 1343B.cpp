#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    if(n % 4 != 0) {
			cout << "NO" << endl;
		} 
		else {
			cout << "YES" << endl;
			int sum1 = 0, sum2 = 0;
			for(int i = 0; i < n / 2; i++) {
				cout << 2 * (i + 1) << " ";
				sum1 += 2 * (i + 1);
			}
			for(int i = 0; i < n / 2 - 1; i++) {
				cout << 2 * (i + 1) - 1 << " ";
				sum2 += 2 * (i + 1) - 1;
			}
			cout << sum1 - sum2 << endl;
		}
	}
}
