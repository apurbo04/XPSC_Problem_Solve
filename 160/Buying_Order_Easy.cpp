#include <bits/stdc++.h>
using namespace std;
void solve()
{
     int n;
     cin >> n;
     int one = 0;
     int zero = 0;
     for (int i = 0; i < n; i++)
     {
          int x;
          cin >> x;
          if (i == n - 1 && x == 1)
               one++;

          if (i == 0 && x == 0)
               zero++;
     }
     if (one & zero)
          cout << 2 * n - 2 << endl;
     else
          cout << 2 * n - 1 << endl;
}
int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);
     int t;
     cin >> t;
     while (t--)
          solve();
     return 0;
}