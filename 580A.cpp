#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    int prev = 0;
    int curr = 0;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        a[i] = x;
        
        if(i!=0){
            if(a[i-1]>x){
                if(prev<curr){
                    prev=curr;
                }
                curr=0;
            }
        }curr++;
    }
    if(curr>prev){
        cout<<curr;
    }
    else{
        cout<<prev;
    }
	return 0;
}
