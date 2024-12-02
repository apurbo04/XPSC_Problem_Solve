#include <bits/stdc++.h>
#define ll long long
#define in cin >>
#define ot cout <<
#define no cout << "NO\n";
#define yes cout << "YES\n";
#define vt                       \
     vector<int> v(n);           \
     for (int i = 0; i < n; i++) \
          cin >> v[i];
#define nd << '\n';

using namespace std;
void solve()
{
     int n;
     in n;
     int mn = 1, mx = n * n, c = 0;
     ll ans[n + 1][n + 1];
     for (int i = 1; i <= n; i++)
     {
          if (i % 2 == 1)
          {
               for (int j = 1; j <= n; j++)
               {
                    if (c % 2 == 1)
                    {
                         ans[i][j] = mn;
                         mn++;
                    }
                    else
                    {
                         ans[i][j] = mx;
                         mx--;
                    }
                    c++;
               }
          }
          else
          {
               for (int j = n; j >= 1; j--)
               {
                    if (c % 2 == 1)
                    {
                         ans[i][j] = mn;
                         mn++;
                    }
                    else
                    {
                         ans[i][j] = mx;
                         mx--;
                    }
                    c++;
               }
          }
     }
     for (int i = 1; i <= n; i++)
     {
          for (int j = 1; j <= n; j++)
          {
               ot ans[i][j] << " ";
          }
          cout nd
     }
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