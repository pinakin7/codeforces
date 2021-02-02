#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,a,b;
    cin>>n;
    while(n--){
        cin>>a>>b;
        if(a>=b && a%b != 0){
            cout<<((a/b+1)*b) - a<<endl;
        }
        else if(a%b==0)cout<<0<<endl;
        else{
            cout<<b-a<<endl;
        }
    }
    return 0;
}
