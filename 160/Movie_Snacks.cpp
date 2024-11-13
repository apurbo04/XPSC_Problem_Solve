#include <bits/stdc++.h>
using namespace std;
int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);

     int x, y, z;
     cin >> x >> y >> z;
     int ans1 = (2 * x) + (3 * y);
     int ans2 = (z * 2) + y;
     cout << min(ans1, ans2) << endl;
     return 0;
}