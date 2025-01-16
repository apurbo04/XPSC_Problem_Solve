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

const int maxN = 1e6 + 9;
vector<int> divisors(maxN);
void solve()
{
   int n;
   in n;
   ot divisors[n] nd;
}
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   for (int i = 1; i < maxN; i++)
   {
      for (int j = i; j < maxN; j += i)
         divisors[j]++;
   }

   int t;
   in t;
   while (t--)
   {
      solve();
   }
   return 0;
}

// Apurbo04