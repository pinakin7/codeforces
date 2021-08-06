#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b,c;
	cin>>a>>b>>c;
	int max = INT_MIN;
	int sum[10];
	sum[0] = a+b+c;
	sum[1] = a+b*c;
	sum[2] = a*b*c;
	sum[3] = a*b+c;
	sum[4] = (a*b)+c;
	sum[5] = a*(b+c);
	sum[6] = (a+b)*c;
	sum[7] = a+(b*c);
	for(int i = 0; i<8; i++){
	    if(max<sum[i]){
	        max=sum[i];
	    }
	}
	cout<<max;
	return 0;
}
