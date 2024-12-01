#include <bits/stdc++.h>
#define ll long long
#define in cin >>
#define ot cout <<
#define no cout << "NO\n";
#define yes cout << "YES\n";
#define vt                       \
     vector<int> v(n);           \
     for (int i = 0; i < n; i++) \
          cin >> v[i];
#define nd << '\n';

using namespace std;
void solve()
{
     int n;
     in n;
     int firstB = 1, endA = 3 * n - 1;
     ot (n+1)/2 nd
     while(endA>firstB)
     {
          ot firstB <<" "<< endA nd
          firstB +=3;
          endA -= 3;
     }
}
int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);
     int t;
     in t;
     while (t--)
     {
          solve();
     }
     return 0;
}

// Apurbo04