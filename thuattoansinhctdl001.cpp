#include <bits/stdc++.h>
using namespace std;
int a[1000],fanal=1,n;
void khoitao(){
    for(int i=0;i<=n;i++){
        a[i]==0;
    }
}
void sinh(){
    int i=n;
    while(i>=1&&a[i]==1){
        a[i--]=0;
    }
    if(i==0){
        fanal=0;
        return;
    }
    a[i] = 1;
}
int main(){
    int m; cin>>m;
    n=m/2;
    khoitao();
    while(fanal){
        string s="";
        for(int i=1;i<=n;i++){
        s+=to_string(a[i])+" ";
        }
        string tmp=s;
        reverse(tmp.begin(),tmp.end());
        if(m%2==0) cout<<s+tmp<<endl;
        else cout<<s+"0"+tmp<<endl<<s+"1"+tmp<<endl;
    sinh();
    }
    
}