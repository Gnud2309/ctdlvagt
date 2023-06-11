#include <bits/stdc++.h>
using namespace std;

vector<int> ke[200005];
int duocduyet[200005]={};
int chuaduyet[200005]={};

void dfs(int x){
    duocduyet[x]=1;
    for(int i:ke[x]){
        if(duocduyet[i]==0) dfs(i);
    }
}

int main(){
    int dinh,canh;
    cin>>dinh>>canh;
    while(canh--){
        int x,y;
        cin>>x >>y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
    for(int i=1;i<=dinh;i++){
        memset(duocduyet,0,sizeof(duocduyet));
        int cnt=0;
        duocduyet[i]=1;
        for(int j=1;j<=dinh;++j){
            if(duocduyet[j]==0){
                ++cnt;
                dfs(j);
            }
        }
        cout<<cnt<<endl;
    }
}