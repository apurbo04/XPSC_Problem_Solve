#include <bits/stdc++.h>
using namespace std;

int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);

     double a, b, t;
     cin >> a >> b >> t;
     t += .5;
     int x = 1,m, ans = 0;
     while (true)
     {
          m = a*x;
          x++;
          if (m <= t)
               ans += b;
          else
               break;
     }
     cout<<ans;
     return 0;
}