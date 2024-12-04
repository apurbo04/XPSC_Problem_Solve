#include <bits/stdc++.h>
#define ll long long
#define in cin >>
#define ot cout <<
#define nl << endl;
#define no cout << "NO\n";
#define yes cout << "YES\n";
using namespace std;
int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);

     int t;
     in t;

     while (t--)
     {
          int n;
          ll k;
          in n >> k;

          vector<ll> a(n);
          ll cnt = 0, cnt1 = 0, sum = 0;

          for (int i = 0; i < n; i++)
          {
               in a[i];
               sum += (a[i] / k);

               if (a[i] % k != 0)
               {
                    if (a[i] < 0)
                    {
                         cnt++;
                    }
                    else
                    {
                         cnt1++;
                    }
               }
          }

          if (k == 1)
          {
               if (sum == 0)
                    ot "YES\n";
               else
                    ot "NO\n";
               continue;
          }

          if (sum == 0)
          {
               ot "YES\n";
               continue;
          }
          if (sum < 0)
          {
               if (abs(sum) <= cnt1)
               {
                    ot "YES\n";
               }
               else
               {
                    ot "NO\n";
               }
          }
          else
          {
               if (sum <= cnt)
                    yes else no
          }
     }

     return 0;
}