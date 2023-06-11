#include <bits/stdc++.h>
using namespace std;
#define ll long long
int mod =1e9+7;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n]; 
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        ll sum=0;
        for(int i=0;i<n;i++){
            sum+= a[i]*i;
            sum %=mod;
        }
        cout<<sum<<endl;
    }
}