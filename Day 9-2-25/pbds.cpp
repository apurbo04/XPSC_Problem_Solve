#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

using namespace std;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag,
                  tree_order_statistics_node_update>;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int n;
   cin >> n;
   pbds<pair<int, int>> p;
   for (int i = 1; i <= n; i++)
   {
      int x;
      cin >> x;
      p.insert({x, i});
   }

   // p.erase({4, 1});

   int x = p.order_of_key({9,3});
   cout << x << endl;

   for (auto [x, y] : p)
   {
      cout << x << " " << y << endl;
   }
   // cout << endl;

   return 0;
}