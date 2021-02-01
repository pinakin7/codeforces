#include <bits/stdc++.h>
using namespace std;


int main(){
    string s;
    string t;
    cin>>s;
    cin>>t;
    reverse(t.begin(),t.end());
    if(t.compare(s)==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
