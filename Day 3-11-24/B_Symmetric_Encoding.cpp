#include <bits/stdc++.h>
using namespace std;

int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);

     int t;
     cin >> t;
     while (t--)
     {
          int n;
          cin >> n;
          string s;
          cin >> s;
          set<char> r;
          for (char c : s)
               r.insert(c);

          string sr;
          for (auto it : r)
          {
               sr.push_back(it);
          }
          string sp = sr;
          reverse(sp.begin(), sp.end());

          for (int i = 0; i < s.size(); i++)
          {
               for (int j = 0; j < sr.size(); j++)
               {
                    if (s[i] == sp[j])
                    {
                         s[i] = sr[j];
                         break;
                    }
               }
          }
          cout << s << endl;
     }

     return 0;
}