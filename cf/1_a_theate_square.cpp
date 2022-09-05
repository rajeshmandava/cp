// Problem : https://codeforces.com/contest/1/problem/A

/* 
Time Complexity : O(1)
Space Complexity : O(1)

 */

#include <bits/stdc++.h>
using namespace std;
 
long long mx(int a, int b)
{
	long long ans = a / b;
	if (a % b != 0)
		ans++;
	return ans;
}
 
int main()
{

	int n, m, a;
	cin >> n >> m >> a;
	cout<<mx(n, a) * mx(m, a)<<endl;
	// cout << ans;
 
 
}