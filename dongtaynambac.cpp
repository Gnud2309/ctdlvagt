#include <bits/stdc++.h>
using namespace std;
int n,N1,m,a[100],b[100];
vector <string> v;
void in()
{
	for(int i=1;i<=n;i++)
	{
		cout <<v[a[i]-1]<<" ";
	}
	cout <<endl;
}
void ql(int i)
{
	for(int j=1;j<=n;j++)
	{
		if(b[j]==0)
		{
			a[i]=j;
			b[j]=1;
			if(i==n && a[n]==m+1)
			{
				in();
			}else
				ql(i+1);
				
			b[j]=0;	
		}
	}
}
int main()
{
 	cin >> N1;
 	scanf("\n");
	string s;getline(cin,s);
	string s1;cin >>s1;
	stringstream ss(s);
	string token;
	while(ss>>token)
	{
		v.push_back(token);
	}
	sort(v.begin(),v.end());
	for(int i=0;i<v.size();i++)
	{
		if(v[i]==s1)
		{
			m=i;
		}
	}
	n=v.size();
	ql(1);
}