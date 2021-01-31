#include <bits/stdc++.h>
using namespace std;

int main(){
    int i,x,sum=0;
    cin>>x;
    string s;
    cin>>s;
    for(i = 0;i < s.length();i++){
        if(s[i] == s[i+1])sum+=1;
    }cout<<sum;
    return 0;
}
