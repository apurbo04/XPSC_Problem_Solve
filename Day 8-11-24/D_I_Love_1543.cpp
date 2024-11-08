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
          int n, m;
          cin >> n >> m;
          vector<string> s(n);
          for (int i = 0; i < n; i++)
          {
               cin >> s[i];
          }
          vector<string> v;
          for (int i = 0; i < min(n / 2, m / 2); i++)
          {
               string temp;
               for (int j = i; j < m - 1; j++)
               {
                    temp.push_back(s[i][j]);
               }
               for (int k = i + 1; k < n - i; k++)
               {
                    temp.push_back(s[k][m - i - 1]);
               }
               for (int j = m - i - 2; j >= i; j--)
               {
                    temp.push_back(s[n - i - 1][j]);
               }
               for (int k = n - i - 2; k > i; k--)
               {
                    temp.push_back(s[k][i]);
               }
               v.push_back(temp);
          }
          int ans = 0;
          for (auto x : v)
          {
               x.push_back(x[0]);
               x.push_back(x[1]);
               x.push_back(x[2]);
               int sz = x.size();
               for (int i = 0; i < sz - 3; i++)
               {
                    if (x.substr(i, 4) == "1543")
                         ans++;
               }
          }
          cout << ans << "\n";
     }
     return 0;
}