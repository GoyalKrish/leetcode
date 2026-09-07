class Solution {
    const long long MOD = 1e9 + 7;
public:
    int distinctSubseqII(string s) {
        const int n = s.size();
        vector<long long> dp(n+1, 0);
        dp[0] = 1;

        vector<int> lastIdx(26,-1);

        for(int i = 0 ; i < n ; ++i){
            dp[i+1] = (2 * dp[i]) % MOD;

            int c = s[i] - 'a';

            if(lastIdx[c] != -1){
                dp[i+1] -= dp[lastIdx[c]];
                dp[i+1] += MOD;
                dp[i+1] %= MOD;
            }

            lastIdx[c] = i;
        }

        return (dp[n] - 1 + MOD) % MOD;
    }
};