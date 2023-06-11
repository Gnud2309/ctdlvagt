#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

void dequy(string s, int k, set<int>& sohang, int start = 0, int cnt = 0) {
    if (k == 0) {
        numbers.insert(cnt);
        return;
    }
    for (int i = start; i <= s.length() - k; i++) {
        int digit = s[i] - '0';
        dequy(s, k - 1, numbers, i + 1, cnt * 10 + digit);
    }
}

int main() {
    int t; cin>>t;
    while (t--) {
        string s;
        int k;
        cin >> s >> k;
        set<int> numbers;
        dequy(s, k, numbers);
        for (int cnt : numbers) {
            cout << cnt << endl;
        }
    }
    return 0;
}