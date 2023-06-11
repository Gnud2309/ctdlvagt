#include <bits/stdc++.h>
using namespace std;
int n; // lưu cấu hình
char a[100];
int final = 1; // check cấu hình cuối
void init(){
    for(int i = 1; i <= n; i++){
    a[i] = 'A';
    }
}
void sinh(){
    int i = n;
    while(i >= 1 && a[i] == 'B'){
    a[i] = 'A';
    --i;
    }
    if(i == 0){
    final = 0;
    return;
    }   
    a[i]='B';
}
int main(){
    int t; cin>>t;
    while(t--){
    cin>>n;
    init();
    while(final){
    for(int i = 1; i <= n; i++){
    cout << a[i];
    }cout<<" ";
    sinh();
    }
    cout<<endl;
    final=1;
    }
}