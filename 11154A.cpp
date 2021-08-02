#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int arr[4];
	for(int i = 0; i < 4; i++){
	    cin>>arr[i];
	}
	
	int a=0,b=0,c=0;
	
	for(int i = 0; i < 4; i++){
	    for(int j = i; j < 4-i-1; j++){
	        if(arr[j] > arr[j+1]){
	            int temp = arr[j];
	            arr[j] = arr[j+1];
	            arr[j+1] = temp;
	        }
	        
	    }
	}
	
	a = arr[3] - arr[0];
	b = arr[3] - arr[1];
	c = arr[3] - arr[2];
	cout<<a<<" "<<b<<" "<<c;
	return 0;
}
