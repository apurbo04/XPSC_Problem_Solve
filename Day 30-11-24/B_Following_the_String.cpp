#include <bits/stdc++.h>
#define ll long long
#define in cin >>
#define ot cout <<
#define no cout << "NO\n";
#define yes cout << "YES\n";
#define vt                       \
     vector<int> v(n);           \
     for (int i = 0; i < n; i++) \
          cin >> v[i];
#define nd '\n';

using namespace std;
void solve(string str)
{
     map<char, int> mp;
     for (int i = 0; i < str.size(); i++)
     {
          mp[str[i]] = 0;
     }
     int n;
     in n;
     for (int i = 0; i < n; i++)
     {
          int x;
          in x;
          for (auto it : mp)
          {
               if (it.second == x)
               {
                    ot it.first;
                    mp[it.first]++;
                    break;
               }
          }
     }
     ot nd;
}
int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);
     int t;
     in t;
     string str = "abcdefghijklmnopqrstuvwxyz";
     while (t--)
     {
          solve(str);
     }
     return 0;
}

// Apurbo04