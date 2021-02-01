#include <bits/stdc++.h>
using namespace std;


int main(){
    int n,a=0,d=0;
    string s;
    cin>>n;
    cin>>s;
    for(int i = 0;i<s.length();i++){
        if(s[i]=='D'){
            d+=1;
        }
        else{
            a+=1;
        }
    }
    if(a>d){
        cout<<"Anton";
    }
    else if(d>a){
        cout<<"Danik";
    }
    else{
        cout<<"Friendship";
    }
    return 0;
}
