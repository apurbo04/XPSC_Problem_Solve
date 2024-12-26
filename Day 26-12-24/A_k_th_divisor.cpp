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
}
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   ll n, k;
   in n >> k;
   vector<ll> divisor;
   for (ll i = 1; i * i <= n; i++)
   {
      if ((n % i) == 0)
      {
         divisor.push_back(i);
         if ((n / i) != i)
            divisor.push_back(n / i);
      }
   }

   sort(divisor.begin(), divisor.end());

   if (divisor.size() < k)
      ot - 1 nd;
   else
      ot divisor[k - 1] nd;

   return 0;
}

// Apurbo04