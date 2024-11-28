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
          if (n % 2 == 1)
          {
               no
               continue;
          }
          yes
          for (int i = 0; i < n / 2; ++i)
               for (int j = 0; j < 2; ++j)
                    ot "AB"[i & 1];
          ot nd
     }
     return 0;
}

// Apurbo04