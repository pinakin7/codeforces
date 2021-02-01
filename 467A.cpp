#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    int p,q,c=0;
    while(n--){
        cin>>p>>q;
        if(abs(p-q)>=2)c++;
    }cout<<c;
    return 0;
}
