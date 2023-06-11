#include <bits/stdc++.h>
using namespace std;
int longest(string s){
    int n=s.length();
    vector<int> f(n,1);
    f[0]=1;
    int maxlen=1;
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(s[j]<=s[i]){
                f[i]=max(f[j]+1,f[i]);
            }
        }
        maxlen=max(maxlen,f[i]);
    }
    return maxlen;
}
int main(){
    string s;
    cin>>s;
    cout<<longest(s)<<endl;
    return 0;
}