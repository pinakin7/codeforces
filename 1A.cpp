#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m,a;
    cin>>n>>m>>a;
    long long value=ceil((double)m/a)*ceil((double)n/a);
    cout<<value ;
	return 0;
}
