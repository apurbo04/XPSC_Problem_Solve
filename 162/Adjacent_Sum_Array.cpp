#include <bits/stdc++.h>
#define ll long long
#define in cin >>
#define ot cout <<
#define no cout << "NO\n";
#define yes cout << "YES\n";
using namespace std;

void solve()
{
     int n;
     in n;
     vector<ll> b(n - 1);
     for (int i = 0; i < n - 1; i++)
     {
          in b[i];
     }
     sort(b.begin(), b.end());

     vector<ll> a(n);
     a[0] = 1;
     a[1] = b[0] - a[0];
     for (int i = 1; i < n; i++)
     {
          a[i] = b[i - 1] - a[i - 1];
     }
     for (int i = 0; i < n; i++)
     {
          ot a[i] << " ";
     }
     ot endl;
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