#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int k;
    cin>>n>>k;
    int c = 0;
    int teams=0;
    while(n--){
        int y;
        cin>>y;
        if((5-y) >= k){
            c++;
            if(c==3){
                teams++;
                c=0;
            }
        }
    }
    cout<<teams;
	return 0;
}
