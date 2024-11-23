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
          int a, b, c;
          in a >> b >> c;
          int x = abs(a - 1), y;
          if (b >= c)
          {
               y = abs(b - 1);
          }
          else
          {
               y = abs(b - c) + abs(c - 1);
          }
          if (x > y)
          {
               cout << "2" << endl;
          }
          else if (x == y)
          {
               cout << "3" << endl;
          }
          else 
          {
               cout << "1" << endl;
          }
     }
     return 0;
}

// Apurbo04