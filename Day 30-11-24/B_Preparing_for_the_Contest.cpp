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
#define nd '\n';

using namespace std;
void solve()
{
     int n, k;
     in n >> k;
     int x =n;
     vector<int> v(n);
     for (int i = 0; i < n; i++)
     {
          if (k > 0)
          {
               v[i] = i + 1;
               k--;
          }
          else
          {
               v[i] = x;
               x--;
          }
     }
     for (int i = 0; i < n; i++)
     {
          ot v[i] << " ";
     }
     ot nd
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