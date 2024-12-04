#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int test;
    cin >> test;
    while (test--)
    {
        int n, k;
        cin >> n >> k;
        int count = 0;
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 != 0)
                count++;
        }
        if (k == count || k == (count - 1))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
// Apurbo04