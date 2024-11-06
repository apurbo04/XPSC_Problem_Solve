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
          int n;
          cin >> n;
          vector<int> v(n);
          for (int i = 0; i < n; i++)
          {
               cin >> v[i];
          }
          vector<pair<int, string>> op(n);
          for (int i = 0; i < n; i++)
          {
               cin >> op[i].first >> op[i].second;
               for (char c : op[i].second)
               {
                    if (c == 'D')
                    {
                         if (v[i] == 9)
                         {
                              v[i] = 0;
                         }
                         else
                         {
                              v[i] += 1;
                         }
                    }
                    else if (c == 'U')
                    {
                         if (v[i] == 0)
                         {
                              v[i] = 9;
                         }
                         else
                         {
                              v[i] -= 1;
                         }
                    }
               }
          }
          for (auto it : v)
               cout << it << " ";
          cout << '\n';
     }
     return 0;
}