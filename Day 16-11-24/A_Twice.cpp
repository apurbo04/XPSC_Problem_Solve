#include <bits/stdc++.h>
using namespace std;

int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);

     int t;
     cin >> t;
     while (t--)
     {
          int n;
          cin >> n;
          vector<int> v(n);

          for (int i = 0; i < n; i++)
          {
               cin >> v[i];
          }

          unordered_map<int, int> freq;
          for (int i = 0; i < n; i++)
          {
               freq[v[i]]++;
          }

          int cnt = 0;
          for (auto [key, value] : freq)
          {
               cnt += (value * (value - 1)) / 2;
          }
          
          cout << cnt << endl;
     }
     return 0;
}
