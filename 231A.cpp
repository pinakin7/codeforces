#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int x,sum=0;
    cin>>x;
    while(x--){
        bool p,v,t;
        cin>>p>>v>>t;
        if((p&&v) | (v&&t) | (p&&t)){
            sum = sum+1;
        }
    }cout<<sum;
	return 0;
}
