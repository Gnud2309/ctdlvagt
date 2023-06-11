#include <bits/stdc++.h>
using namespace std;
int n, k;
string s;

string Try(int i)
{
    if (i == 0)
        return "A";
    if (i == 1)
        return "B";
    else
        return Try(i - 1) + Try(i - 2);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        string res;
        res = Try(n);
        int cnt = 0;
        for (int i = 0; i < k; i++)
        {
            if (res[i] == 'A')
                cnt++;
        }
        cout << cnt;
        cout << endl;
    }
    system("pause");
}