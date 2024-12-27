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

const int MOD = 1e9 + 7;

using namespace std;
void solve()
{

   int n, ans = 1;
   in n;
   for (int i = 1; i <= n; i++)
   {
      ans = (1LL * ans % MOD * i % MOD) % MOD;
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