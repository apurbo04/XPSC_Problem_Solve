#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll GCD(ll a, ll b)
{
   return __gcd(a, b);
}

ll LCM(ll a, ll b)
{
   return (a / __gcd(a, b)) * b;
}

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   ll n, a, b, p, q;
   cin >> n >> a >> b >> p >> q;

   ll x = (n / a) * p, y = (n / b) * q, over_lap = (n / lcm(a, b));
   ll ans = (x + y) - (over_lap * (p + q)) + (over_lap * max(p, q));

   cout << ans << endl;
   return 0;
}