#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,sum=0;
    cin>>x;
    string s;
    while(x--){
        cin>>s;
        if(s[1] == '-'){
            --sum;
        }
        if(s[1] == '+'){
            ++sum;
        }
    }
    cout<<sum;
	return 0;
}
