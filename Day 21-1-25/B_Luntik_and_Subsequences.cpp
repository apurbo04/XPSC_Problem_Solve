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
   vt;
   int cnt1=0,cnt0=0;
   for (int i = 0; i < n; i++)
   {
      in v[i];
      if(v[i]==0) cnt0++;
      else if(v[i]==1) cnt1++;
   }
   ot cnt1*(1LL<<cnt0) nd;
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