#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c=0;
    cin>>a>>b;
    if(a>b)swap(a,b);
    b = (b-a)/2;
    cout<<a<<" "<<b;
return 0;    
}
