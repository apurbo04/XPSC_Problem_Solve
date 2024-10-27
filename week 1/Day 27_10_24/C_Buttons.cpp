#include <bits/stdc++.h>
using namespace std;

int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);

     int a, b;
     cin >> a >> b;
     if (a != b)
          cout << max(a, b) * 2 - 1;
     else
          cout << a * 2;
     return 0;
}