#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k,sum=0,i;
    cin>>n;
    cin>>k;
    int v[n];
    
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    int pass = v[k-1];
    if((pass>=0) && (v[0] != 0) | (v[n-1] != 0)){
        for(i=0;i<n;i++){
            if(v[i]!=0){
                if(v[i] >= pass){
                sum=sum+1;
                
            }
            }
            
        }
    }
    cout<<sum;
	return 0;
}
