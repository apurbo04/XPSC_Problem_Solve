#include <bits/stdc++.h>
#define ll long long
#define in cin >>
#define ot cout <<
#define no cout << "NO\n";
#define yes cout << "YES\n";
using namespace std;

int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);
     int t;
     in t;
     while (t--)
     {
          int n;
          in n;
          ll total = 0;
          vector<int> v(n + 1);
          for (int i = 0; i < n; i++)
          {
               in v[i];
               total += v[i];
          }
          int x = (50 * (n + 1)) - total;
          if (x > 100)
               ot - 1 << endl;
          else if (x <= 0)
               ot 0 << endl;
          else
               ot x << endl;
     }
     return 0;
}

// Apurbo04