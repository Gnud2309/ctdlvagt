#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;

int parent[1005], sz[1005];

struct edge
{
    int x, y, w;
};

int Find(int u)
{
    if (parent[u] == u)
    {
        return u;
    }
    else
    {
        return parent[u] = Find(parent[u]);
    }
}

bool Union(int u, int v)
{
    u = Find(u);
    v = Find(v);
    if (u == v)
        return false;
    if (sz[u] < sz[v])
    {
        sz[v] += sz[u];
        parent[u] = v;
    }
    else
    {
        sz[u] += sz[v];
        parent[v] = u;
    }
    return true;
}

void solve()
{
    int n, e;
    cin >> n >> e;
    for (int i = 1; i <= n; i++)
    {
        parent[i] = i;
        sz[i] = 1;
    }
    vector<edge> v;
    while (e--)
    {
        int x, y, w;
        cin >> x >> y >> w;
        edge e = {x, y, w};
        v.push_back(e);
    }
    int ans = 0;
    vector<edge> MST;
    sort(v.begin(), v.end(), [](edge a, edge b) -> bool
         { return a.w < b.w; });
    for (edge e : v)
    {
        if (MST.size() == n - 1)
        {
            break;
        }
        if (Union(e.x, e.y))
        {
            ans += e.w;
            MST.push_back(e);
        }
    }
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}