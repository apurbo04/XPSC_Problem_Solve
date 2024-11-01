#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);

     ll n, ans = 0;
     cin >> n;
     vector<ll> v(n);
     for (int i = 0; i < n; i++)
     {
          cin >> v[i];
          ans += v[i];
     }

     sort(v.begin(), v.end());

     if (ans % 2 == 0)
     {
          cout << ans;
     }
     else
     {
          for (int i = 0; i < n; i++)
          {
               ll p = ans - v[i];
               if (p % 2 == 0)
               {
                    cout << p;
                    break;
               }
          }
     }

     return 0;
}