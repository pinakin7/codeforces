#include <bits/stdc++.h>
using namespace std;

int subtract(int n){
    if(n%10 != 0){
        return n-1;
    }
    return n/10;
}

int main(){
    int n,k;
    cin>>n>>k;
    while(k--){
        n = subtract(n);
    }
    cout<<n;
    return 0;
}
