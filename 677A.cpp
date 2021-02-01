#include <bits/stdc++.h>
using namespace std;


int main(){
    int n,h;
    cin>>n>>h;
    int a,w = 0;
    while(n--){
        cin>>a;
        if(a>h){
            w+=2;
        }
        else{
            w+=1;
        }
    }cout<<w;
    return 0;
}
