#include<bits/stdc++.h>
using namespace std;
int n,k,a[100],b[100],final=1;
void init(){
    for(int i=1;i<=n;i++){
        a[i]=i;
    }
}
void sinh(){
    int i=k;
    while(i>=1 && a[i]==n-k+i){
        i--;
    }
    if(i==0){
        final=0;
        return;
    }
    a[i]++;
    for(int j=i+1;j<=k;j++) a[j]=a[j-1]+1;
}
int check(int a[],int b[],int k){
    for(int i=0;i<=k;i++){
        if(b[i]!=a[i]) return 0;
    }
    return 1;
}
int main(){
    int t; cin>>t;
    while(t--){
        cin>>n>>k;
        int cnt=1;
        for(int i=1;i<=k;i++) cin>>b[i];
        init();
        while(final && !check(a,b,k)){
            sinh();
            cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}