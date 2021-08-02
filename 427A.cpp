#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n;
	cin>>n;
	int hire = 0;
	int count = 0;
	while(n--){
	    int k;
	    cin>>k;
	    hire = hire + k;
	    if(hire<0){
	        count++;
	        hire = 0;
	    }
	}
	cout<<count;
	return 0;
}
