#include <bits/stdc++.h>
using namespace std;

int main() {
    string code;
    cin>>code;
    string output = "NO";
    for(int i = 0; i < code.length(); i++){
        if(code[i]=='H' || code[i]=='Q' || code[i] == '9'){
            output="YES";
            break;
        }
    }
    cout<<output;
	return 0;
}
