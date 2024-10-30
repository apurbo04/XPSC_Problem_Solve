#include <bits/stdc++.h>
using namespace std;

int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);

     int n;
     cin >> n;
     vector<pair<string, string>> v;
     for (int i = 0; i < n; i++)
     {
          string tree, color;
          cin >> tree >> color;
          v.push_back({tree, color});
     }
     int cnt2 = 0;
     bool flag = false;
     for (int i = 0; i < n - 1; i++)
     {
          for (int j = i + 1; j < n; j++)
          {
               if (v[i].first == v[j].first && v[i].second == v[j].second)
               {
                    if (flag)
                         continue;
                    flag = true;
               }
               else if (v[i].first != v[j].first && v[i].second != v[j].second)
                    cnt2++;
          }
     }
     if (flag)
          cout << 1;
     else
          cout << cnt2;
     return 0;
}