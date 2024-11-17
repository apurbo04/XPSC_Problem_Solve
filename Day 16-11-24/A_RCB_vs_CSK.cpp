#include <bits/stdc++.h>
using namespace std;

int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);

     int c, r;
     cin >> c >> r;
     if (abs(r - c) >= 18)
          cout << "RCB";
     else
          cout << "CSK";

     return 0;
}