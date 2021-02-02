#include <bits/stdc++.h>
using namespace std;

int faces(string s){
    if(s.compare("Tetrahedron")==0)return 4;
    if(s.compare("Cube")==0)return 6;
    if(s.compare("Octahedron")==0)return 8;
    if(s.compare("Dodecahedron")==0)return 12;
    if(s.compare("Icosahedron")==0)return 20;
}

int main(){
    int n,c=0;
    cin>>n;
    string s;
    while(n--){
        cin>>s;
        c += faces(s);
    }cout<<c;
    return 0;
}
