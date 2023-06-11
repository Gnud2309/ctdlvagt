#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        ll sum1=0,sum2=0,sum3=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=0;i<n;i+=2){
            sum1=sum1*10+a[i];
        }
        for(int i=1;i<n;i+=2){
            sum2= sum2*10+a[i];
        }
        sum3=sum1+sum2;
        cout<<sum3<<endl;
        sum3==0;
    }
}