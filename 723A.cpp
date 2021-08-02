#include <bits/stdc++.h>
using namespace std;

int main() {
    int dist[3];
    for(int i = 0; i < 3 ; i++){
        cin>>dist[i];
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            if(dist[j] < dist[j+1]){
                int temp = dist[j];
                dist[j] = dist[j+1];
                dist[j+1] = temp;
            }
        }
    }
    cout<< dist[0] - dist[2];
	return 0;
}
