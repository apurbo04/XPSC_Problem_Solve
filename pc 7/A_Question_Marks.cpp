#include <bits/stdc++.h>
#define ll long long
#define in cin >>
#define ot cout <<
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define vt   \
   int n;    \
   cin >> n; \
   vector<int> v(n)
#define nd << '\n'

using namespace std;
void solve()
{
   int n;
   in n;
   string s;
   in s;
   map<char, int> mp;
   for (int i = 0; i < s.size(); i++)
   {
      mp[s[i]]++;
   }
   int ans = 0;
   for (auto i : mp)
   {
      if (i.second >= n && i.first != '?')
      {
         ans += n;
      }
      else if (i.second <= n && i.first != '?')
      {
         ans += i.second;
      }
   }
   ot ans nd;
}
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   in t;
   while (t--)
   {
      solve();
   }
   return 0;
}

// Apurbo04