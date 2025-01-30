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
   int n, x;
   in n >> x;
   if (n < 7 && n > 0)
      ot x nd;
   else if (n % 6 == 0)
      ot((n / 6) * x) nd;
   else
      ot(((n / 6) + 1) * x) nd;
   // ot((n / 6) + 1 * x) nd;
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