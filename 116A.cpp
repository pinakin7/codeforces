#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    int a,b;
    int total = 0,curr=0;
    while(n--){
        cin>>a>>b;
        curr-=a;
        curr+=b;
        total = max(total,curr);
        
    }cout<<total;
    return 0;
}
