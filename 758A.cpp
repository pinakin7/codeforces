#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
 
       
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
 

int main() {
    int n;
    cin>>n;
    if(n==1){
        cout<<0;
    }
    else{
        int citizens[n];
        for(int i = 0; i < n; i++){
        cin>>citizens[i];
        }
    
        insertionSort(citizens,n);
        int sum = 0;
        for(int i = 0; i < n; i++){
            sum = sum + citizens[n-1] - citizens[i];
        }
        cout<<sum;
    }
	return 0;
}
