#include <bits/stdc++.h>
using namespace std;
int dp[5005][5005];
void qhd(){
    string s;
    cin>>s;
    memset(dp,0,sizeof(dp));
    int n=s.size();
    for(int i=1;i<=n;i++) dp[i][i]=1;
    for(int i=n;i>=1;i--){
        for(int j=i+1;j<=n;j++){
           if(s[i-1]==s[j-1]&& (j==i+1||dp[i+1][j-1]==1)){
            dp[i][j]=1;
           }
        }
    }
    int q,l,r; cin>>q;
    while(q--){
        cin>>l>>r;
        cout<<(dp[l][r]?"YES":"NO")<<endl;
    }
}
int main(){
    int t=1;
    while(t--){
        qhd();
    }
    return 0;
}