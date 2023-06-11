#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
typedef pair<int, int> ii;

void solve()
{
    int n, e, z;
    cin >> n >> e >> z;
    vector<ii> a[1005];
    while (e--)
    {
        int x, y, w;
        cin >> x >> y >> w;
        a[x].push_back({y, w});
        a[y].push_back({x, w});
    }
    priority_queue<ii, vector<ii>, greater<ii>> q;
    q.push({0, z});
    vector<int> d(n + 1, 1e9);
    d[z] = 0;
    while (!q.empty())
    {
        ii tmp = q.top();
        int d1 = tmp.first, d2 = tmp.second;
        q.pop();
        if (d1 > d[d2])
        {
            continue;
        }
        for (auto i : a[d2])
        {
            int x1 = i.first, x2 = i.second;
            if (d[x1] > d[d2] + x2)
            {
                d[x1] = d[d2] + x2;
                q.push({d[x1], x1});
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << d[i] << ' ';
    }
    cout << endl;
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