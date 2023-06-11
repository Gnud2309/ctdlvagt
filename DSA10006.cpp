#include <bits/stdc++.h>
using namespace std;
int n,a[1000],final=1;
void init(){
    for(int i=n;i>=1;i--){
        a[i]=i;
    }
}
void sinh(){
    int i=n;
    while(i>=1&&a[i]>a[i+1]){
        --i;
    }
    if(i==0){
        final=0;
        return;
    }
    else{
        int j=n;
        while(a[i]>a[j])--j;
        swap(a[i],a[j]);
        reverse(a+i+1,a+n+1);
    }
}
int main(){
    int t; cin>>t;
    while(t--){
    cin>>n;
    init();
    while(final){
    for(int i = 1; i <= n; i++){
        cout << a[i];
        }
        cout << endl;
        sinh();
    } final=1;
    cout<<endl;
}
}


