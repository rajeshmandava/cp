// Problem :https://codeforces.com/contest/1720/problem/A

/* 
Time Complexity : O(1)
Space Complexity : O(1)
 */

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long a,b,c,d;
		cin>>a>>b>>c>>d;
		long long x = a*d, y =b *c;
		if(x == y)
			cout<<0<<endl;
		else if(y !=0 && x%y == 0 || x!=0 && y%x == 0)
			cout<<1<<endl;
		else
			cout<<2<<endl;

	}
}
