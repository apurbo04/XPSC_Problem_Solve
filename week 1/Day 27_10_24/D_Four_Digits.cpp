#include <bits/stdc++.h>
using namespace std;
int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);

     int a;
     cin >> a;
     vector<int> v;
     int x = 4;
     while (x--)
     {
          v.push_back(a % 10);
          a /= 10;
     }

     for (int i = v.size()-1; i >= 0; i--)
     {
          cout<<v[i];
     }
     return 0;
}