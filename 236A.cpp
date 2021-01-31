#include <bits/stdc++.h>
using namespace std;

int main(){
    int i,j,sum=0;
    string s;
    set<char> x;
    cin>>s;
    for(i = 0;i < s.length();i++){
        x.insert(s[i]);
    }
    if(x.size()%2==0)cout<<"CHAT WITH HER!";
    else{
        cout<<"IGNORE HIM!";
    }
    
    return 0;
}
