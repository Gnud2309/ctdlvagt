#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t; cin>>t;
    while(t--){
        string s1,s2; cin>>s1>>s2;
        int n=s1.size(),m=s2.size();
        ll f[n+1][m+1];
        memset(f,0,sizeof(f));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                f[i][j]=max(f[i-1][j],f[i][j-1]);
                if(s1[i-1]==s2[j-1]){
                    f[i][j]=max(f[i-1][j-1]+1,f[i][j]);
                }
            }
        }
        cout<<f[n][m]<<endl;
    }
}