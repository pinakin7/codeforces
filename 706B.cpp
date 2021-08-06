#include<bits/stdc++.h>
using namespace std;

int binary_search(int x[],int i, int n, int m){
    int mid = (i+n)/2;
    if(i==n){
        return i;
    }
    if(x[mid]<=m){
        // move right
        binary_search(x,mid+1,n,m);
    }
    else{
        // move left
        binary_search(x,i,mid,m);
    }
}

int main(){
    int n;
    cin>>n;
    int x[n];
    for(int i = 0 ; i < n; i++){
        cin>>x[i];
    }
    sort(x,x+n);
    int q;
    cin>>q;
    while(q--){
        int m;
        cin>>m;
        int i = binary_search(x,0,n,m);
        
        cout<<i<<endl;
    }
    return 0;
}
