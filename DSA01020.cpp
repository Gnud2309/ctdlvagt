#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        cin >> a;
        int n = a.size();
        a = "1" + a;
        for (int i = n; i >= 0; i--)
        {
            if (a[i] == '1')
            {
                a[i] = '0';
                for (int j = i + 1; j <= n; j++)
                    a[j] = '1';
                break;
            }
        }
        for (int i = 1; i <= n; i++)
            cout << a[i];
        cout << endl;
    }
}