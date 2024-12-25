#include <iostream>
#include <vector>
#include <cmath>

const int MOD = 1000000007;

// Function to compute factorial modulo MOD
long long factorial(int M) {
    long long fact = 1;
    for (int i = 2; i <= M; i++) {
        fact = (fact * i) % MOD;
    }
    return fact;
}

// Function to calculate the number of divisors of a number
int countDivisors(int x) {
    int count = 0;
    for (int i = 1; i <= sqrt(x); i++) {
        if (x % i == 0) {
            if (i == x / i) {
                count++;  // If divisors are the same (perfect square)
            } else {
                count += 2;  // Otherwise, both i and x/i are divisors
            }
        }
    }
    return count;
}

int main() {
    int N, M;
    std::cin >> N >> M;

    // Step 1: Read the array A
    std::vector<int> A(N);
    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }

    // Step 2: Compute M! % MOD
    long long factM = factorial(M);

    // Step 3: Create array B and calculate the number of divisors for each element in B
    std::vector<int> result(N);
    for (int i = 0; i < N; i++) {
        long long B_i = (A[i] * factM) % MOD;
        result[i] = countDivisors(B_i) % MOD;
    }

    // Step 4: Output the result
    for (int i = 0; i < N; i++) {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
