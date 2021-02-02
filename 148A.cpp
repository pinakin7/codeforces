#include <bits/stdc++.h>
using namespace std;

int main(){
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    int a[d],i,c=0;
    for(i = 0;i<d;i++)a[i]=0;
    for(i = k-1;i<d;i+=k)a[i]+=1;
    for(i = l-1;i<d;i+=l)a[i]+=1;
    for(i = m-1;i<d;i+=m)a[i]+=1;
    for(i = n-1;i<d;i+=n)a[i]+=1;
    for(i=0;i<d;i++){
        if(a[i]==0)c++;
    }cout<<d-c;
    return 0;
}
