#include <bits/stdc++.h>
using namespace std;

int prob(int n,int p){
    while(n--){
        cin>>p;
        if(p==1){
            return 1;
        }
    }
    return 0;
}

int main(){
    int n,p;
    cin>>n;
    if(prob(n,p)){
        cout<<"HARD";
    }
    else{
        cout<<"EASY";
    }
    return 0;
}
