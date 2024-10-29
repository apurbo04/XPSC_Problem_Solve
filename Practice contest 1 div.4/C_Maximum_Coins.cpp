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
          int n, x;
          cin >> n >> x;
          int chef = 0;
          int chefina = 0;
          int p = n-x;
          while (true)
          {
               chef += pow(2, n);
               n--;
               x--;
               if (x == 0)
                    break;
          }
          while (true)
          {
               if(p==0)
                    break;
               chefina+= pow(2,p);
               p--;
          }
          cout << (chef-chefina) << endl;
     }

     return 0;
}