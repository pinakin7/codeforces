#include <bits/stdc++.h>
using namespace std;

int count(int n){
    if(n>=100)return n-=100;
    if(n>=20 && n<100)return n-=20;
    if(n>=10 && n<20)return n-=10;
    if(n>=5 && n<10)return n-=5;
    if(n>=1 && n<5)return n-=1;
}

int main(){
   int n,c=0;
   cin>>n;
   while(n>0){
       n=count(n);
       c++;
   }
   cout<<c;
   return 0;
}
