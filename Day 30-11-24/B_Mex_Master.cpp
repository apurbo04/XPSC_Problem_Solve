#include <bits/stdc++.h>
#define ll long long
#define in cin >>
#define ot cout <<
#define no cout << "NO\n";
#define yes cout << "YES\n";
#define vt                       \
     vector<int> v(n);           \
     for (int i = 0; i < n; i++) \
          cin >> v[i];
#define nd << '\n';

using namespace std;
void solve()
{
     int n;
     in n;
     vector<int> v(n);
     int cnt_0 = 0, cnt_1 = 0;
     int mx = 0;
     for (int i = 0; i < n; i++)
     {
          in v[i];
          if (v[i] == 0)
               cnt_0++;
          else
               cnt_1++;

          mx = max(mx, v[i]);
     }
     if ((n - cnt_0) >= (cnt_0 - 1))
     {
          ot 0 nd return;
     }

     if (mx > 1 || mx == 0)
          ot 1 nd else ot 2 nd
}
int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);
     int t;
     in t;
     while (t--)
     {
          solve();
     }
     return 0;
}

// Apurbo04
