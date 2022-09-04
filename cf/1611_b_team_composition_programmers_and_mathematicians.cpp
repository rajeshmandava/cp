// Problem : https://codeforces.com/problemset/problem/1611/B

/* 
Time Complexity :O(1)
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
		int a,b;
		cin>>a>>b;
		int teams = min(min(a,b),(a+b)/4);
		cout<<teams<<endl;
	}
}