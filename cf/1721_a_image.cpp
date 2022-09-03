// Problem :https://codeforces.com/contest/1721/problem/A

/* 
Time Complexity:O(1)
Space Complexity:O(1)
 */


#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        string s1, s2;
        cin >> s1 >> s2;
        s1 += s2;
        cout << set<int>(s1.begin(), s1.end()).size() - 1 << endl;
    }
}