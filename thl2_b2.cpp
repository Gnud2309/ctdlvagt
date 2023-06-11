#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k; 
    cin>>n>>k;
    priority_queue<int ,vector<int>,greater<int>> pq;
    for(int i=0;i<n;i++){
        int a; cin>>a;
        pq.push(a);
    }

    long long cost=0;

    while(pq.size()>1)
    {
        int K=min(k,static_cast<int>(pq.size()));
        int minvalue=pq.top();
        int maxvalue=minvalue;
        int sum = minvalue;
        pq.pop();

        for(int i=0;i<K;i++){
            int cur = pq.top();
            pq.pop();
            maxvalue = cur;
            sum+=cur;
        }
        cost += maxvalue - minvalue;
        pq.push(sum);
    }
    cout<<pq.top()<<endl;
    cout<<cost<<endl;
    return 0;
}