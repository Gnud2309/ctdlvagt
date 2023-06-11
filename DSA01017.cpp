#include<bits/stdc++.h>
using namespace std;
int b[1000];
int main(){
    int t; cin>>t;
    while(t--){
        int a;
        cin>>a;
        int m,n; cin>>m>>n;
        int x=m+n;
        for(int i=0;i<x;i++){
            cin>>b[i];
        }
        sort(a,a+x);
        for(int i=0;i<x;i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;
    }
}