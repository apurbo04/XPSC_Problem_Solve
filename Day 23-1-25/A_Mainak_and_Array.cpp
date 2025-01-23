#include <bits/stdc++.h>
#define ll long long
#define in cin >>
#define ot cout <<
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define vt int n;cin>>n;vector<int> v(n)
#define nd << '\n'

using namespace std;
void solve()
{
   vt;
   for (int i = 0; i < n; i++)
   {
      in v[i];
   }
   int ans = v[n-1]-v[0];
   for (int i = 0; i < n-1; i++)
   {
      ans = max(ans, v[n-1]-v[i]);
   }
   for (int i = 1; i < n; i++)
   {
      ans = max(ans, v[i]-v[0]);
   }
   for (int i = 1; i < n; i++)
   {
      ans = max(ans, v[i-1]-v[i]);
   }
   ot ans nd;
   
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