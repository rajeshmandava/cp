// Problem : https://atcoder.jp/contests/abc265/tasks/abc265_a

/* 
Time Complexity : O(1)
Space Complexity : O(1)
 */

#include <bits/stdc++.h>
using namespace std;

 
int main()
{

	int x,y,n;
	cin>>x>>y>>n;
	int xsum = 0, ysum=0;
	ysum = (n/3)*y;

	xsum = (n%3)*x;
	int sum= xsum+ysum;
	cout<<min(sum,x*n)<<endl;
 
}