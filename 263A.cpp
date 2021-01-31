#include <bits/stdc++.h>
using namespace std;

int main(){
    int mat[5][5],i,j,x,y;
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            cin>>mat[i][j];
            if(mat[i][j] == 1){
                x = i;
                y = j;
            }
        }
    }
    cout<<abs(x-2)+abs(y-2);
    
    return 0;
}
