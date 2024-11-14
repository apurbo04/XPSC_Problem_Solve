#include <bits/stdc++.h>
#define ll long long 
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
          vector<ll> v(n);
          ll sum = 0, cnt = 0;
          for (int i = 0; i < n; i++)
          {
               cin >> v[i];
          }

          bool negSeg = false;
          for (int i = 0; i <= n; i++)
          {
               if (i < n)
                    sum += abs(v[i]);
               if (negSeg)
               {
                    if (i == n or v[i] > 0)
                    {
                         cnt++;
                         negSeg = false;
                    }
               }
               else
               {
                    if (v[i] < 0)
                         negSeg = true;
               }
          }
          cout << sum << " " << cnt << "\n";
     }
     return 0;
}