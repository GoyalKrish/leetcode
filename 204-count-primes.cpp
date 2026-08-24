class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0;
        
        // 1. Use vector<char> to avoid bit-manipulation overhead
        vector<char> isPrime(n, true);
        
        // Start by assuming all numbers from 2 to n-1 are prime
        int ans = n - 2; 

        // 2. Eliminate even numbers > 2
        for (int i = 4; i < n; i += 2) {
            if (isPrime[i]) {
                isPrime[i] = false;
                ans--;
            }
        }

        // 3. Sieve for odd numbers
        for (int i = 3; i * i < n; i += 2) {
            if (isPrime[i]) {
                // j starts at i*i, increments by 2*i to skip even multiples
                for (int j = i * i; j < n; j += 2 * i) {
                    if (isPrime[j]) {
                        isPrime[j] = false;
                        ans--; // Count as you go
                    }
                }
            }
        }
        
        return ans;
    }
};
