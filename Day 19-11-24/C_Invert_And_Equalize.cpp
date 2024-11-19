#include <iostream>
#include <string>
using namespace std;

int minOperations(string &s)
{
     int count0 = 0, count1 = 0; 
     char prev = s[0];
     if (prev == '0')
          count0++;
     else
          count1++;

     for (int i = 1; i < s.length(); ++i)
     {
          if (s[i] != prev)
          {
               if (s[i] == '0')
                    count0++;
               else
                    count1++;
               prev = s[i];
          }
     }
     return min(count0, count1);
}

int main()
{
     int T;
     cin >> T; 
     while (T--)
     {
          int N;
          cin >> N;
          string S;
          cin >> S;
          cout << minOperations(S) << endl;
     }
     return 0;
}
