#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

// Function to calculate the cycle length for each component
int findCycleLength(vector<int>& P, vector<bool>& visited, int start) {
    int current = start, length = 0;
    do {
        visited[current] = true;
        current = P[current];
        length++;
    } while (current != start);
    return length;
}

void solve() {
    int T; 
    cin >> T; // Number of test cases
    while (T--) {
        int N; 
        cin >> N; // Length of the permutation
        vector<int> P(N + 1); // Permutation (1-based indexing)
        for (int i = 1; i <= N; ++i) {
            cin >> P[i];
        }

        vector<bool> visited(N + 1, false);
        ll maxCycleSum = 0; // Maximum possible sum of V[i]
        ll minCost = 0;     // Minimum total cost to achieve maxCycleSum
        vector<int> cycleLengths;

        // Identify all cycles and their lengths
        for (int i = 1; i <= N; ++i) {
            if (!visited[i]) {
                int cycleLength = findCycleLength(P, visited, i);
                cycleLengths.push_back(cycleLength);
            }
        }

        // Calculate the maximum sum and the minimum cost
        if (cycleLengths.size() == 1) {
            // Already one big cycle, no swaps needed
            cout << 0 << "\n";
        } else {
            // To form one cycle, sum up all lengths except the largest
            sort(cycleLengths.rbegin(), cycleLengths.rend());
            minCost = accumulate(cycleLengths.begin() + 1, cycleLengths.end(), 0LL);
            cout << minCost << "\n";
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
