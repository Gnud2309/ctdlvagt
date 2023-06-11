#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll xuly(string s, char x, char y){
    for(int i=0;i<s.length();i++){
        if(s[i] == x) s[i] = y;
    }
    return stoll(s);
}
int main(){
    string a,b;
    cin>>a>>b;
    cout << xuly(a,'6','5') + xuly(b,'6','5') << " ";
    cout << xuly(a,'5','6') + xuly(b,'5','6');
    
}