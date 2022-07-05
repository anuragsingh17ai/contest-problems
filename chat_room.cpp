#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,k="hello";
	cin>>s;
	int j=0;
	for(int i=0;i<s.length();i++)
	{
		
		if(k[j]==s[i] )
			j++;
		if(j==5)
		{
			cout<<"YES\n";
			return 0;
		}
	}

		cout<<"NO\n";
	return 0;
}
