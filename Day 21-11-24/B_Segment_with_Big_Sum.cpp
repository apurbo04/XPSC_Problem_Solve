#include <bits/stdc++.h>
using namespace std;

int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);

     long long n, s;
     cin >> n >> s;
     vector<int> v(n);
     for (int i = 0; i < n; i++)
          cin >> v[i];

     int l = 0, ans = INT_MAX;
     long long sum = 0;
     for (int r = 0; r < n; r++)
     {
          sum += v[r];
          while (sum - v[l] >= s)
          {
               sum -= v[l];
               l++;
          }
          if (sum >= s)
               ans = min(ans, r - l + 1);
          // cout << l << " " << r << " " << sum << " " << ans << endl;
     }
     if (ans == INT_MAX)
          cout << -1 << endl;
     else
          cout << ans << endl;
     return 0;
}