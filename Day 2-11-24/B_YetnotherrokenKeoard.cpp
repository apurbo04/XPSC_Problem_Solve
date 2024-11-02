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
          string s;
          cin >> s;
          stack<int> cap, sm;
          for (int i = 0; i < s.size(); i++)
          {
               if (s[i] != 'b' && s[i] >= 'a' && s[i] <= 'z')
                    sm.push(i);
               if (s[i] != 'B' && s[i] >= 'A' && s[i] <= 'Z')
                    cap.push(i);
               if (!sm.empty() && s[i] == 'b')
               {
                    s[sm.top()] = '*';
                    sm.pop();
               }
               if (!cap.empty() && s[i] == 'B')
               {
                    s[cap.top()] = '*';
                    cap.pop();
               }
          }
          for (char c : s)
          {
               if (c != '*' && c != 'b' && c != 'B')
                    cout << c;
          }
          cout << endl;
     }

     return 0;
}