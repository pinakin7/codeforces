#include <bits/stdc++.h>
using namespace std;

int main(){
    int s[4],i,j,c=0;
    for(i=0;i<4;i++)cin>>s[i];
    sort(s,s+4);
    for(i=0;i<3;i++){
        if(s[i]==s[i+1]){
            c++;
        }
    }
    cout<<c;
    return 0;
}
