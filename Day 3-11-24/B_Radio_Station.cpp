#include <bits/stdc++.h>
using namespace std;

int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);

     int n, m;
     cin >> n >> m;
     vector<pair<string, string>> vn(n);
     for (int i = 0; i < n; i++)
     {
          cin >> vn[i].first >> vn[i].second;
     }
     vector<pair<string, string>> vm(m);
     for (int i = 0; i < m; i++)
     {
          cin >> vm[i].first >> vm[i].second;
     }
     vector<pair<string, string>> vx(m);
     for (int i = 0; i < n; i++)
     {
          for (int j = 0; j < m; j++)
          {
               if (vn[i].second + ";" == vm[j].second)
               {
                    vx[j].first = vm[j].first;
                    vx[j].second = vm[j].second + " #" + vn[i].first;
               }
          }
     }
     for (int i = 0; i < m; i++)
     {
          cout << vx[i].first << " " << vx[i].second << endl;
     }

     return 0;
}