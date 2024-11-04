#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        string chef, chefina;
        cin >> chef >> chefina;

        long long c1 = 0, c2 = 0;
        vector<int> changes_needed;

        // Count wins for Chef and Chefina, and collect changeable rounds
        for (long long i = 0; i < n; i++) {
            if (chef[i] == chefina[i]) {
                // Draw round
                changes_needed.push_back(1); // Changing a draw to a win requires 1 change
            } else if ((chef[i] == 'R' && chefina[i] == 'S') ||
                       (chef[i] == 'P' && chefina[i] == 'R') ||
                       (chef[i] == 'S' && chefina[i] == 'P')) {
                // Chef wins
                c1++;
            } else {
                // Chefina wins
                c2++;
                changes_needed.push_back(1); // Changing a loss to a win requires 1 change
            }
        }

        // If Chef is already winning, no changes are needed
        if (c1 > c2) {
            cout << 0 << endl;
            continue;
        }

        // Calculate minimum number of changes needed for Chef to win
        int required_wins = (c2 - c1);
        int min_changes = 0;

        // Sort change options to use the smallest number of changes first
        sort(changes_needed.begin(), changes_needed.end());

        for (int i = 0; i < required_wins && i < changes_needed.size(); i++) {
            min_changes += changes_needed[i];
        }

        cout << min_changes << endl;
    }

    return 0;
}
