#include <bits/stdc++.h>
using namespace std;
int n,k;
vector<string> dulieu[17][17];
void back(int cnt,string s){
    if (s.size() <= 16) dulieu[s.size()][cnt].push_back(s);
    if (s.size() + 1 <= 16) {
        back(cnt, s + '0');
        back(cnt + 1, s + '1');
    }
}
int main(){
    back(0,"");
    int t; cin>>t;
    while(t--){
        cin>>n>>k;
        for(auto i : dulieu[n][k])
        cout<< i <<endl;
    }
}