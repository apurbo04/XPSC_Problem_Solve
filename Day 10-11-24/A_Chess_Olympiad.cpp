#include <bits/stdc++.h>
using namespace std;

int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);

     int w, d, l;
     cin >> w >> d >> l;
     int baki = 4 - (w + d + l);
     float winPoint = 0, lossPoint = 0;
     winPoint += w;
     lossPoint += l;
     winPoint += d * (0.5);
     lossPoint += d * (0.5);
     winPoint += baki;
     if (winPoint > lossPoint)
          cout << "Yes";
     else
          cout << "No";

     return 0;
}