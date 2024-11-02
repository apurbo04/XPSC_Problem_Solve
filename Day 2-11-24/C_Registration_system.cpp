#include <bits/stdc++.h>
using namespace std;

int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);

     map<string, int> count;
     int t;
     cin >> t;
     while (t--)
     {
          string name;
          cin >> name;
          if (count[name] == 0)
               cout << "OK" << endl;
          else
               cout << name << count[name] << endl;
          count[name] = count[name] + 1;
     }
     return 0;
}