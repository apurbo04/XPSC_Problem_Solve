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
          string s, t;
          cin >> s >> t;
          bool flag = false;
          for (int i = 0; i < n; i++)
          {
               if (s[i] == 'a')
                    s[i] = 'ab';
               for (int j = 0; j < m; j++)
               {
                    if (s == t)
                         flag = true;
                    if (t[j] == 'a')
                         t[j] = 'ab';
               }
          }
          if (flag)
               cout << "Yes" << endl;
          else
               cout << "No" << endl;
     }
     return 0;
}