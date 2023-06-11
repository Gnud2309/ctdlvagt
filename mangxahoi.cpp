#include <bits/stdc++.h>
using namespace std;
#define pb push_back

string solve(int v , int e){
    int x,y;
    vector<int> a[v+5];
    while(e--){
        cin>>x>>y;
        a[x].pb(y);
        a[y].pb(x);
    }
    for(int i=1;i<=v;i++){
        for(int &j : a[i])
        if(a[i].size() != a[j].size())
        return "NO";
    }
    return "YES";
}
int main(){
    int t; cin>>t;
    while(t--){
        int v,e;
        cin>>v>>e;
        cout<<solve(v,e)<<endl;
    }
    return 0;
}