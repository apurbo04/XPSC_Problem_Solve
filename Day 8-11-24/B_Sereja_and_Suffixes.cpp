#include <bits/stdc++.h>
using namespace std;

int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);

     int n, m;
     cin >> n >> m;
     vector<int> v(n + 1);
     for (int i = 1; i <= n; i++)
     {
          cin >> v[i];
     }
     set<int> s;
     vector<int> cnt(n + 1);
     for (int j = n; j >0 ; j--)
     {
          s.insert(v[j]);
          cnt[j]=s.size();
     }
     for (int i = 1; i <= m; i++)
     {
          int pos;
          cin >> pos;
          cout << cnt[pos] << endl;
     }

     return 0;
}