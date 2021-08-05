#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin>>n;
    int x_force=0,y_force=0,z_force=0;
    for(int i = 0; i<n; i++){
        int x,y,z;
        cin>>x>>y>>z;
        x_force+=x;
        y_force+=y;
        z_force+=z;
    }
    if(x_force==0&&y_force==0&&z_force==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    
	return 0;
}
