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
     int n,XOR =0;
     in n;
     vt
     for (int i = 0; i < n; i++)
     {
          XOR^=v[i]; 
     }
     int ans = XOR;
     for (int i = 0; i < n; i++)
     {
          int curXOR = (XOR^v[i]);
          ans = min(ans,curXOR);
     }
     ot ans nd
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