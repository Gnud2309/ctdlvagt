#include<bits/stdc++.h>
#define test() int t; cin >> t; while (t--)
#define input(m,n) for (int i = 0; i < n; i++) cin >>  m[i];
#define output(m,n) for (int i = 0; i < n; i++) cout << m[i] << ' ';
#define FOR(i,l,r) for (int i = l; i < r; i++)
using namespace std;

long n, k, s;
int m[100005],q[1000];

int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	test() {
		cin >> n >> s >> k;
		int index = -1;
		input(m,n);
		q[s - 1] = m[s - 1];
		if (q[s-1] <= k) index = n-1;
		for (int i = s-2; i >= 0; i--) {
			q[i] = m[i] + q[i+1];
			if (q[i] <=  k){
				index = i + 1;
			}
			else if (q[i] > k){
				break;
			}
		}
		cout << index << endl;
	}
}