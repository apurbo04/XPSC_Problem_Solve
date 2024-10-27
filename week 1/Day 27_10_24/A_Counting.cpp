#include <bits/stdc++.h>
using namespace std;

int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);

     int a, b;
     cin >> a >> b;
     int cnt = 0;
     if (a > b)
          cout << 0;
     else
     {
          for (int i = a; i <= b; i++)
               cnt++;
          cout << cnt;
     }

     return 0;
}