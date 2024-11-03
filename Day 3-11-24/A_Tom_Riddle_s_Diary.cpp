#include <bits/stdc++.h>
using namespace std;

int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);

     int n;
     cin >> n;
     map<string, int> mp;
     while (n--)
     {
          string name;
          cin >> name;
          mp[name]++;
          if (mp[name] > 1)
               cout << "YES" << endl;
          else
               cout << "NO" << endl;
     }

     return 0;
}