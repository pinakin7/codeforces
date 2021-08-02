#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int k,r;
	cin>>k>>r;
	if(k%10 == 0){
	    cout<<1;
	}

    else{
        int c = 0,temp=1;
    	while(temp){
    	    c++;
    	    if((((k*c)-r)%10 == 0) || ((k*c)%10==0)){
    	        temp = 0;
    	    }
    	    
    	}
    	cout<<c;
    }	
	
		return 0;
}
