#include<bits/stdc++.h>
using namespace std;
vector<int> a[1000000];
vector<bool> visited;
void dfs(int root){
    visited[root] = true;
    vector<int> :: iterator i;
    for(i = a[root].begin(); i!= a[root].end(); i++){
        if(!visited[*i]){
            dfs(*i);
        }
    }
}

int main(){
    int n,t;
    cin>>n>>t;
    // directed graph
    for(int i = 1; i<n; i++){
        int x;
        cin>>x;
        a[i].push_back(i+x);
        visited.push_back(false);
    }
    
    // curr -> 1 
    // dfs from cell 1 to cell t
    
    dfs(1);
    
    if(visited[t]){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
