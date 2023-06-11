#include <bits/stdc++.h>
using namespace std;
int n,a[1000];
void init(){
    for(int i=1;i<=n;i++) a[i]=i;
}
int main(){
    int t; cin>>t;
    while(t--){
    cin>>n;
    init();
    do{
        for(int i=1;i<=n;i++){
        cout<<a[i];
    }
    cout<<endl;
    }while (next_permutation(a+1,a+n+1));
    }
    cout<<endl;
}