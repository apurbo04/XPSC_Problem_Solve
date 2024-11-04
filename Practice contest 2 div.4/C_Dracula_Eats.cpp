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
          int x, cnt = 0;
          cin >> x;

          while (x > 1)
          {
               cnt++;
               x -= 7;
          }
          cout << cnt << endl;
     }
     return 0;
}