#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int angle;
        cin>>angle;
        float sides = (double)360/((double)180-(double)angle);
        // cout<<sides;
        if(sides == static_cast<int>(sides)){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}
