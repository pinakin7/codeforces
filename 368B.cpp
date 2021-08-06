#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n , m;
    cin >> n >> m;
    long long a[n] , b[n];
    set<long long> s;
    for(long long i = 0 ; i < n ;i++){
        cin >> a[i];
    }
    for(long long i = n - 1 ; i >= 0 ; i--){
        s.insert(a[i]);
        b[i]=s.size();
    }
    long long x;
    for(long long i = 0 ; i < m ; i++){
        cin >> x;
        x--;
        cout << b[x] << endl;
    }
    return 0;
}
