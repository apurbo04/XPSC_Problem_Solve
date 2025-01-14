#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

void solve() {
    int t;
    cin >> t;  // Number of test cases
    
    while (t--) {
        int n;
        cin >> n;  // Length of the array
        
        vector<int> a(n);
        long long sum_a = 0;  // Sum of elements in array a
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum_a += a[i];
        }
        
        if (n == 1) {
            cout << "NO\n";  // Impossible for single element array
        } else {
            cout << "YES\n";
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
