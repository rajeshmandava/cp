// Problem : https://codeforces.com/contest/1722/problem/A

/* 
Time Complexity : O(N LogN)
Space Complexity : O(1) -> length of string is 1<=n<=10
 */

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	int t;
	cin>>t;
	string sorted = "Timru";
	while(t--)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		sort(s.begin(),s.end());
		if(s.length() == 5 && s==sorted)
		{
			cout<<"YES"<<endl;
		}
		else
			cout<<"NO"<<endl;
 
	
	}
}