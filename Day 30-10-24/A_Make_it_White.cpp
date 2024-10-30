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
          vector<int> v;
          for (int i = 1; i <= n; i++)
          {
               cin>>s[i];
               if(s[i]=='B')
               {
                    v.push_back(i);
               }
          }
          cout<<v.back()-v.front()+1<<endl;
     }
     return 0;
}