#include <bits/stdc++.h>
using namespace std;
void solve()
{
     int n, m;
     cin >> n >> m;
     string s, t;
     cin >> s >> t;
     if (s == t)
     {
          cout << "Yes" << endl;
          return;
     }
     int t_a = 0, s_a = 0;
     for (int i = 0; i < n; i++)
     {
          if (s[i] == 'a')
               s_a++;
     }
     for (int i = 0; i < m; i++)
     {
          if (t[i] == 'a')
               t_a++;
     }
     if (t_a != s_a)
     {
          cout << "NO" << endl;
          return;
     }
     int s_b = 0, t_b = 0;
     for (int i = 0; i < n; i++)
     {
          if (s[i] == 'a')
               break;
          s_b++;
     }
     for (int i = 0; i < m; i++)
     {
          if (t[i] == 'a')
               break;
          t_b++;
     }
     if (s_b == t_b)
          cout << "Yes" << endl;
     else
          cout << "No" << endl;
}
int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);
     int t;
     cin >> t;
     while (t--)
     {
          solve();
     }
     return 0;
}