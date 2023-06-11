#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        vector<int> v(n), a(n);
        for(int i = 0; i < n; ++i)
        {
            cin >> a[i];
            v[i] = i + 1;
        }
        if(a == v) cout << 1 << endl;
        else
        {
            int cnt = 1;
            while(v != a)
            {
                ++cnt;
                next_permutation(v.begin(),v.end());
            }
            cout << cnt << endl;
        }
    }
    return 0;
}