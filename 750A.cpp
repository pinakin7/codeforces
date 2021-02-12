#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i;
    cin>>n>>k;
    int t = (4*60) - k;
    int w = 0;
    for(i = 1;i<=n;i++){
        w += 5*i;
        if((t-w) < 0)break;
    }cout<<i-1;
return 0;    
}
