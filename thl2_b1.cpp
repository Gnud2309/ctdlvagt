#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> a;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        a.push_back(i);
   }
    int lcm = 1;
    for (int i = 2; i <= m; i++) {
        int g = gcd(lcm, i);
        lcm = lcm * i / g;
    }

    do {
        int index=1;
        for (int i = 1; i <= n; i++) {
            if (lcm % i == 0) {
                cout << a[index] << " ";
                index++;
            }
        }
        cout << endl;
    } while (next_permutation(a.begin(), a.end()));

    return 0;
}