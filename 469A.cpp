#include <bits/stdc++.h>
using namespace std;

int main(){
    set<int> a;
    int n;
    int x;
    cin>>n;
    int p;
    cin>>p;
    while(p--){
        cin>>x;
        a.insert(x);
    }
    int q;
    cin>>q;
    while(q--){
        cin>>x;
        a.insert(x);
    }
    if(a.size()==n){
        cout<<"I become the guy.";
    }
    else{
        cout<<"Oh, my keyboard!";    
    }
    return 0;
}
