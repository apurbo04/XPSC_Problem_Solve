#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
     int n;
     cin >> n;
     vector<int> contests(n);

     for (int i = 0; i < n; i++)
     {
          cin >> contests[i];
     }

     sort(contests.begin(), contests.end());

     int days = 0;
     for (int i = 0; i < n; i++)
     {
          if (contests[i] >= days + 1)
          {
               days++;
          }
     }

     cout << days << endl;
     return 0;
}
