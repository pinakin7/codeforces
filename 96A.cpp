#include <bits/stdc++.h>
using namespace std;

int main() {
    string players;
    cin>>players;
    int count = 0;
    for(int i = 0; i < players.length()-1; i++){
        if(players[i] == players[i+1]){
            count++;
            if(count>=6){
                cout<<"YES";
                return 0;
            }
        }
        else{
            count=0;
        }
    }
    
    cout<<"NO";
    
	return 0;
}
