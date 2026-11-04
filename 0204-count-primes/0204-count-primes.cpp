class Solution {
public:
    bool primechecker(int n) {
        if (n <= 1) return false;
        if (n == 2) return true;
        if (n % 2 == 0) return false; // Skip even numbers

        for (int i = 3; i * i <= n; i += 2) { // Increment by 2 (only check odd divisors)
            if (n % i == 0) {
                return false;
            }
        }

        return true;
    }

    int countPrimes(int n) {
        // Case 1: Strictly less than 2 means 0 primes
        if (n <= 2) return 0;

        // Case 2: Start with count = 1 to account for 2 (the only even prime)
        int count = 1;

        // Case 3: Loop only through odd numbers strictly less than n
        for (int i = 3; i < n; i += 2) {
            if (primechecker(i)) {
                count++;
            }
        }

        return count;
    }
};
// it was mention in the question strictly less than n 