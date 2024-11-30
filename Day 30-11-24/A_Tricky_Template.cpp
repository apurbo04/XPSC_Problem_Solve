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
     int n;
     in n;
     string a, b, c;
     in a >> b >> c;
     bool flag = 0;
     for (int i = 0; i < n; i++)
     {
          if (a[i] != c[i] && b[i] != c[i])
          {
               flag = 1;
               break;
          }
     }
     if (flag)
          yes else no
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