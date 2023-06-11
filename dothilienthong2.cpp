#include <bits/stdc++.h>
using namespace std;
vector<int> ke[1005];
int visited[1005]={};
vector<pair<int,int>>dscanh;

void DFS(int u,int x,int y){
    visited[u]=1;
    for(int i: ke[u]){
        if((i==x&&u==y)||(i==y&&u==x)){
            continue;
        }
        if(visited[i]==0){
            DFS(i,x,y);
        }
    }
}

int main(){
    int t; cin>>t;
    while(t--){
        memset(visited,0,sizeof(visited));
        int dinh,canh;
        cin>>dinh>>canh;
        dscanh.clear();
        for(int i=1;i<=dinh;++i) ke[i].clear();
        while(canh--){
            int dau,cuoi;
            cin>>dau>>cuoi;
            ke[dau].push_back(cuoi);
            ke[cuoi].push_back(dau);
            dscanh.push_back({dau,cuoi});
        }

        vector<pair<int,int>> ans;
        for(auto i:dscanh){
            memset(visited,0,sizeof(visited));
            int cnt=0;
            int x=i.first;
            int y=i.second;
            for(int j=1;j<=dinh;++j){
                if(visited[j]==0){
                    cnt++;
                    DFS(j,x,y);
                }
            }
            if(cnt>1) ans.push_back({x,y}); 
        }
        cout<<ans.size()<<endl;
        for(auto i: ans) cout<<"("<<i.first<<" "<<i.second<<")";
        cout<<endl;
    }
}