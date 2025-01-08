#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;

        int odd_pairs = 0, total_ones = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] == '1' && b[i] == '1') {
                odd_pairs++; // Count pairs of 1s that overlap
            } else if (a[i] == '1' || b[i] == '1') {
                total_ones++; // Count individual 1s that aren't paired
            }
        }

        total_ones += 2 * odd_pairs; // Include all `1`s from overlapping pairs

        // Check if the total number of selected `1`s can be made odd
        if (total_ones % 2 == 1) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
