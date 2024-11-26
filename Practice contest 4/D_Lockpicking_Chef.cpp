#include <bits/stdc++.h>
#define ll long long
#define in cin >>
#define ot cout <<
#define no cout << "NO\n";
#define yes cout << "YES\n";
using namespace std;

int cyclic_dis(char a, char b)
{
     int x = a - '0';
     int y = b - '0';
     return min(abs(x - y), 10 - abs(x - y));
}

int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);

     int t;
     in t;

     while (t--)
     {
          int n, m;
          in n >> m;
          string s, k;
          in s >> k;

          int min_moves = INT_MAX;
          for (int i = 0; i <= n - m; i++)
          {
               int cur_moves = 0;

               for (int j = 0; j < m; j++)
               {
                    cur_moves += cyclic_dis(s[i + j], k[j]);
               }
               min_moves = min(min_moves, cur_moves);
          }
          ot min_moves << endl;
     }

     return 0;
}

// Apurbo04
