#include <bits/stdc++.h>
using namespace std;
int n,a[100];
bool used[100];
void in(int t){
    for(int i=1;i<=t;i++){
        int x=a[i] +64;
        cout<< (char)x;
    }
    cout<<endl;
}
void Try(int i,int t){
    for(int j=1;j<=3;j++){
        if(used[j]==false){
            a[i]=j;
            if(i==t){
                int x=0,y=0,z=0;
                for(int i=1;i<=t;i++){
                    if(a[i]==1){
                        x++;
                    }
                    else if(a[i]==2){y++;
                    }
                    else {z++;
                    }
                }
                if(x<=y&&y<=z&&x&&y&&z){ in(t);
                }
            }
            else{
                Try(i+1,t);
            }
        }
    }
}
int main(){
    cin>>n;
    for(int t=3;t<=n;t++){
        Try(1,t);
        memset(used,false,sizeof(used));
    }
}