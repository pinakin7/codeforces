#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,c=0,i,j;
    cin>>n;
    int a[n],h[n];
    for(i = 0;i<n;i++){
        int x,y;
        cin>>x>>y;
        a[i] = y;
        h[i] = x;
    }
    for(i = 0;i<n;i++){
        for(j = 0;j<n;j++){
            if(h[i]==a[j])c++;
        }
    }cout<<c;
    return 0;
}
