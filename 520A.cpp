#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    set<char> s1;
    for(int i = 0;i<s.length();i++)s1.insert(s[i]);
    if(s1.size()==26)cout<<"YES";
    else{
        cout<<"NO";
    }
    return 0;
}
