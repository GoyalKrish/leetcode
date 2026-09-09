class Solution {
public:
    long long countCommas(long long n) {
        long long base = 999;
        long long ans = 0;
        while(n > base){
            ans = ans + max(0ll,(n - base));
            base = base * 1000 + 999;
        }

        return ans;
    }
};