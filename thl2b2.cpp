#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        pq.push(a);
    }

    long long sumcost = 0;

    while (pq.size() > 1) {
        int k = min(K, static_cast<int>(pq.size()));
        int min_val = pq.top();
        int max_val = min_val;
        int sum = min_val;
        pq.pop();

        for (int i = 1; i < k; i++) {
            int cur = pq.top();
            pq.pop();
            max_val = cur;
            sum += cur;
        }

        sumcost += max_val - min_val;
        pq.push(sum);
    }

    cout << pq.top() << endl;
    cout << sumcost << endl;

    return 0;
}