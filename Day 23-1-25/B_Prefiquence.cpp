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
   string p, q;
   int n, m,idx=0, ans = 0;
   in n >> m;
   in p >> q;
   for (int i = 0; i < q.size(); i++)
   {
      if(p[idx]==q[i])
      {
         ans++;
         idx++;
      }
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