#include <bits/stdc++.h>
using namespace std;

int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);

     int n;
     cin >> n;
     map<pair<string, string>, bool> mp;
     for (int i = 1; i <= n; i++)
     {
          string a, b;
          cin >> a >> b;
          mp[{a, b}] = true;
     }

     // for (auto it : mp)
     // {
     //      pair<string, string> p = it.first;
     //      bool cnt = it.second;
     //      // cout << p.first << " " << p.second << " " << cnt << endl;
     //      cout << it.first.first << " " << it.first.second << " " << it.second<<endl;
     // }

     cout<<mp.size();
     return 0;
}
