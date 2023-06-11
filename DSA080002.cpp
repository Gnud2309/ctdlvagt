#include <bits/stdc++.h>
using namespace std;

int main(){

    queue<int> q;
    int t; cin>>t;
    while(t--){
        string tt; cin>>tt;
        if(tt == "PUSH"){
            int x; cin>>x;
            q.push(x);
        }
        else if(tt == "PRINTFRONT"){
            if(q.empty()) cout<<"NONE"<<endl;
            else cout<<q.front()<<endl;
        }
        else{
            if(!q.empty()){
                q.pop();
            }
        }
    }
}