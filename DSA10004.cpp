#include <bits/stdc++.h>
using namespace std;
int n,k,a[100],final=1;
void init(){
    for(int i=1;i<=k;i++){
        a[i]=i;
    }
}
void sinh(){
    int i=k;
    // kiểm tra xem số đấy đã max chưa
    while(i>=1 && a[i]==n-k+i){
        i--;              
    }
    //nếu i=0 là đã chạy đến cấu hình cuối cùng
    if(i==0){
        final=0;
        return;
    }
    // nếu chưa phải cấu hình cuối cùng
    a[i]++; //tăng thêm 1 khoảng
    for(int j=i+1;j<=k;j++){
        a[j]=a[j-1]+1; //cộng thêm 1 đơn vị 
    }
}
int main(){
    int t;cin>>t;
    while(t--){ 
        cin>>n>>k;
        init(); 
        while(final){
            for(int i=1;i<=k;i++)
            cout<<a[i];
            sinh();
            cout<<" ";
        }
        final=1;
        cout<<endl;
    }
    
}