#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int maxx = INT_MIN,minn = INT_MAX,a[n],i,index_max,index_min;
    for(i=0;i<n;i++)cin>>a[i];
    for(i=0; i<n; i++)
    {
        if(a[i]>maxx)
        {
            maxx=a[i];
            index_max=i;
        }
        if(a[i]<=minn)
        {
            minn=a[i];
            index_min=i;
        }
    }
    n=n-1;
    if(index_max>index_min)
        index_min=index_min+1;
    cout<<index_max+n-index_min;
    return 0;
}
