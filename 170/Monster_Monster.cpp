#include <bits/stdc++.h>
#define ll long long
#define in cin >>
#define ot cout <<
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define vt   \
   int n;    \
   cin >> n; \
   vector<int> v(n)
#define nd << '\n'

using namespace std;
void solve()
{
   int n, k;
   in n >> k;
   vector<ll> v(n);
   for (int i = 0; i < n; i++)
      in v[i];

   sort(v.begin(), v.end());

   ll ans = v[0] + ((v[n - 1] - 1) * k);
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

// sort(v.rbegin(), v.rend());

//    ll sum = 0, ans = v[0];
//    for (int i = 1; i < n; i++)
//    {
//       sum += k;
//       ll curr = v[i] + sum;
//       ans = max(ans, curr);
//    }
//    ot ans nd;