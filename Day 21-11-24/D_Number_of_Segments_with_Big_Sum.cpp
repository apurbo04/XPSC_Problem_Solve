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

     int l = 0;
     long long sum = 0, ans = 0;
     for (int r = 0; r < n; r++)
     {
          sum += v[r];
          while (sum >= s)
          {
               sum -= v[l];
               l++;
          }
          ans += l;
          // cout << l << " " << r << " " << sum << " " << ans << endl;
     }
     cout << ans << endl;
     return 0;
}