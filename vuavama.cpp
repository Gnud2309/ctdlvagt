#include <bits/stdc++.h>
using namespace std;


int dx1[8]={-2,-2,-1,1,2,2,1,-1};
int dy1[8]={-1,1,2,2,1,-1,-2,-2};

int dx2[8]= {-1,-1,-1,0,0,1,1,1};
int dy2[8]={-1,0,1,1,-1,1,-1,-1};

int n;
char a[101][101];
int d1[101][101], d2[101][101];
bool visited[101][101];

void inp(){
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++) cin >>a[i][j];
    }
}

int x,y,u,v;

void house(int i,int j){
    queue<pair<int,int>> q;
    q.push({i,j});
    visited[i][j]=true;
    d1[i][j]=0;
    while(!q.empty()){
        pair<int,int> top=q.front(); q.pop();
        int i=top.first,j=top.second;
        if(i==n&&j==n) return;
        for(int k=0;k<8;k++){
            int i1=i+dx1[k];
            int j1=j+dx1[k];
            if(i1>=1 && i1 <=n &&j1>=1&&j1<=n && !visited[i1][j1]&&a[i1][j1]!='#'){
                visited[i1][j1]=true;
                d1[i1][j1]=d1[i][j]+1;
                q.push({i1,j1});
            }
        }
    }
}

int king(int i,int j){
    queue<pair<int,int>> q;
    q.push({i,j});
    visited[i][j]=true;
    d2[i][j]=0;
    while(!q.empty()){
        pair<int,int> top=q.front(); q.pop();
        int i=top.first,j=top.second;
        if(d2[i][j]==d1[i][j]) return d2[i][j];
        for(int k=0;k<8;k++){
            int i1=i+dx2[k];
            int j1=j+dx2[k];
            if(i1>=1 && i1 <=n &&j1>=1&&j1<=n && a[i1][j1]!='#'){
                visited[i1][j1]=true;
                d2[i1][j1]=d2[i][j]+1;
                q.push({i1,j1});
            }
        }
    }
    return -1;
}

int main(){
    inp();
    int x,y,u,v;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(a[i][j]=='M'){
                x=i;y=j;
            }
            if(a[i][j]=='T'){
                u=i;v=j;
            }
        }
    }
    house(x,y);
    cout<<"\n";
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++) cout<<d1[i][j]<<" ";
        cout<<"\n";
    }
    memset(visited,false,sizeof(visited));
    cout<<"\n";
    cout<<king(u,v)<<"\n";
    cout<<"\n";
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++) cout<<d2[i][j]<<" ";
        cout<<"\n";
    }
    return 0;
}