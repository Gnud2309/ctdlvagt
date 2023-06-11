#include <bits/stdc++.h>

using namespace std;

const int MAXN = 100005;

int parent[MAXN];

void makeSet(int n) {
    int rank[MAXN];
    for (int i = 1; i <= n; i++) {
        parent[i] = i;
        rank[i] = 0;
    }
}

int findSet(int x) {
    if (parent[x] != x) {
        parent[x] = findSet(parent[x]);
    }
    return parent[x];
}

void DSU(int x, int y) {
    int rootX = findSet(x);
    int rootY = findSet(y);
    int rank[MAXN];
    if (rootX != rootY) {
        if (rank[rootX] > rank[rootY]) {
            parent[rootY] = rootX;
        } else {
            parent[rootX] = rootY;
            if (rank[rootX] == rank[rootY]) {
                rank[rootY]++;
            }
        }
    }
}

int main() {
    int q;
    cin >> q;
    makeSet(MAXN - 1);
    while(q--) {
        int x, y, z;
        cin >> x >> y >> z;
        if (z == 1) {
            DSU(x, y);
        } else {
            if (findSet(x) == findSet(y)) {
                cout << "1\n";
            } else {
                cout << "0\n";
            }
        }
    }
    return 0;
}