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
     int n, cnt0 = 0, greater = 0, one = 0;
     in n;
     for (int i = 0; i < n; i++)
     {
          int x;
          in x;
          if (x == 0)
               cnt0++;
          if (x == 1)
               one = 1;
          if (x > 1)
               greater = 1;
     }
     int not0 = n - cnt0;
     if (cnt0 > not0 + 1)
     {
          if (one == 0)
               ot 1 nd else
               {
                    if (greater)
                         ot 1 nd else 2 nd
               }
     }
     else
          ot 0 nd
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