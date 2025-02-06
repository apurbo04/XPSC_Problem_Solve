#include <iostream>
#include <string>
#include <vector>

using namespace std;

int transformString(const string& A, const string& B) {
    int n = A.length();
    int m = B.length();
    
    // Check if B is a subsequence of A
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (A[i] == B[j]) {
            j++;
        }
        i++;
    }
    
    if (j != m) {
        return -1; // B is not a subsequence of A
    }
    
    // Calculate the minimum cost
    i = 0, j = 0;
    int cost = 0;
    while (i < n && j < m) {
        if (A[i] == B[j]) {
            j++;
        } else {
            cost += i + 1; // Cost is the current index + 1 (since indices start from 0)
        }
        i++;
    }
    
    // Add the cost of remaining characters in A
    while (i < n) {
        cost += i + 1;
        i++;
    }
    
    return cost;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        string A, B;
        cin >> A >> B;
        int result = transformString(A, B);
        cout << result << endl;
    }
    return 0;
}