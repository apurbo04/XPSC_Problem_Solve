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
          int n, k, ans = INT_MAX;
          in n >> k;
          vector<int> v(n);
          bool f = 0;
          for (int i = 0; i < n; i++)
          {
               in v[i];
               if (v[i] >= k)
               {
                    f = 1;
                    ans = min(ans, v[i] % k);
               }
          }
          if (f)
               ot ans << endl;
          else
               ot "-1" << endl;
     }
     return 0;
}

// Apurbo04