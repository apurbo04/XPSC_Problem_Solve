#include <bits/stdc++.h>
using namespace std;
int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);
     int t;
     cin >> t;
     while (t--)
     {
          int n, k;
          cin >> n >> k;
          map<char, int> mp;
          string s;
          cin >> s;
          for (int i = 0; i < n; i++)
          {
               mp[s[i]]++;
          }
          int cnt = 0;
          for (auto it : mp)
          {
               if (it.second % 2 != 0)
                    cnt++;
          }

          cnt--;
          if (k >= cnt)
               cout << "YES\n";
          else
               cout << "NO\n";
     }
     return 0;
}