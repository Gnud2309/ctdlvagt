#include<bits/stdc++.h>

using namespace std;


#define pb push_back
#define sz size()
bool check;

inline void DFS(int x, int par, vector<vector<int>> &a, bitset<1005> &bs)
{
    if(check) return;
    bs[x] = 1;
    for(int &i : a[x])
    {
        if(!bs[i]) DFS(i, x, a, bs);
        else if(bs[i] == 1 and i != par)
        {
            check = 1;
            return;
        }
    }
}

int main()
{
    int t = 1, e, v, x, y;
    cin >> t;
    while(t--)
    {
        cin >> v >> e;
        vector<vector<int>> a(v + 5);
        bitset<1005> bs;
        check = 0;
        while(e--)
        {
            cin >> x >> y;
            a[x].pb(y);
            a[y].pb(x);
        }
        for(int i = 1; i <= v; ++i)
        {
            if(check) break;
            else if(!bs[i]) DFS(i, 1, a, bs);
        }
        if(check) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}