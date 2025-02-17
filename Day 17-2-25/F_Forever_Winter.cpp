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
   int n, m;
   in n >> m;
   map<int, set<int>> mp;
   for (int i = 1; i <= m; i++)
   {
      int u, v;
      in u >> v;
      mp[u].insert(v);
      mp[v].insert(u);
   }
   int leaf = -1, ParentOfLeaf = -1;
   for (int i = 1; i <= n; i++)
   {
      if (mp[i].size() == 1)
      {
         leaf = i;
         break;
      }
   }

   int x, y;
   for (int i = 1; i <= n; i++)
   {
      if (mp[i].find(leaf) != mp[i].end())
      {
         y = mp[i].size() - 1;
         ParentOfLeaf = i;
         break;
      }
   }
   for (int i = 1; i <= n; i++)
   {
      if (mp[i].find(ParentOfLeaf) != mp[i].end() && mp[i].size() > 1)
      {
         x = mp[i].size();
         break;
      }
   }
   ot x <<" "<< y nd;
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