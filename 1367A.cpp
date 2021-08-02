#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--){
	    string a;
		cin>>a;
		cout<<a[0];
		for(int i=1;i<a.size();i++){
			cout<<a[i];
			if(i%2==1) i++;
		}
		cout<<endl;
	}
	return 0;
}
