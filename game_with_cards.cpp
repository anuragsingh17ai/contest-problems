#include<bits/stdc++.h>
#define vi vector<int>
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;

void solve()
{	
	int a,b;
	
	cin>>a;
	vi va(a);
	f(i,0,a)	cin>>va[i];
	
	cin>>b;
	vi vb(b);
	f(i,0,b) 	cin>>vb[i];
	
	int ma=*max_element(va.begin(),va.end());
	int mb=*max_element(vb.begin(),vb.end());
	
	if(ma>=mb)
		cout<<"Alice\n";
	else if(ma<mb)
		cout<<"Bob\n";
		
	if(ma<=mb)
		cout<<"Bob\n";
	else if(ma>mb)
		cout<<"Alice\n";
}
	
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	cin>>t;
	while(t--)
		solve();
	return 0;
}
