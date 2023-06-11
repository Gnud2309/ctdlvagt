#include <bits/stdc++.h>
using namespace std;
int a[]= {1000,500,200,100,50,20,10,5,2,1};
int main(){
    int t; cin>>t; 
    int index=0;
    while(t--){
        int sum=0;
        int n; cin>>n;
        while(n!=0){
            sum += n/a[index];
            n = n%a[index];
            index++;
        }
        cout<<sum<<endl;
        index=0;
    }
}