#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll mod = 1e9 + 7;

int a[100];
vector<string> b;
int n, k;
void Try(int i = 1){
	for(int j = a[i - 1] + 1; j <= n - k + i; ++j){
		a[i] = j;
		if(i == k){
			for(int l = 1; l <= k; ++l){
				cout << b[a[l] - 1] << ' '; 
			}
			cout << '\n';
		}else
			Try(i + 1);
	}
}

int main(){

	cin >> n >> k;
	set<string> s;
	for(int i = 0; i < n; ++i){
		string tmp;
		cin >> tmp;
		s.insert(tmp);
	}	
	for(string i : s){
		b.push_back(i);
	}	
	sort(b.begin(), b.end());
	n = b.size();
	Try();
	return 0;
}

