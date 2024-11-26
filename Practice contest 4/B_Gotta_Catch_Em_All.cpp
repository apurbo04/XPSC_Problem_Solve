#include <bits/stdc++.h>
#define ll long long
#define in cin >>
#define ot cout <<
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
          int n, x, y;
          in n >> x >> y;
          vector<int> v(n);
          ll ans = 0;
          for (int i = 0; i < n; i++)
          {
               in v[i];
               if (v[i] * x > y)
                    ans += y;
               else
                    ans += v[i] * x;
          }
          ot ans << endl;
     }
     return 0;
}

// Apurbo04