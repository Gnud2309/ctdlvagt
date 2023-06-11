#include <bits/stdc++.h>
using namespace std;
int prime[100005];
void checksnt(){
    for(int i=0;i<=100005;i++){
        prime[i]=1;
    }
    prime[0]=0;
    prime[1]=0;
    for(int i=0;i<=sqrt(100005);i++){
        if(prime[i]){
            for(int j=i*i;j<100005;j+=i){
                prime[j]=0;
            }
        }
    }
}
int div(int n){
    int x;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            if(prime[n/i]==1) return n/i;
            else if (prime[i]==1) x=i;
        }
    }
    return x;
}
void solve(){
    int l,r; 
    cin>>l>>r;
    long long ans=0;
    for(int i=l;i<=r;i++){
        ans+=div(i);
    }
    cout<<ans<<endl;
}
int main(){
    int t=1; cin>>t;
    checksnt();
    while(t--){
        solve();
    }
    return 0;
}