#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int x;
    cin>>x;
    while(x--){
        string y;
        cin>>y;
        if(y.length()>10){
            cout<<y[0]<<y.length()-2<<y[y.length()-1];
        }
        else{
            cout<<y;
        }cout<<endl;
    }
	return 0;
}
