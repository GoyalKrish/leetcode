class Solution {
    vector<vector<int>> dp;
    int rec(const string& s,const string& t, int i, int j){
        if(j == t.size()) return 1;
        if(i == s.size()) return 0;

        if(dp[i][j] != -1) return dp[i][j];

        if(s[i] != t[j]){
            return dp[i][j] = rec(s,t,i+1,j);
        }
        return dp[i][j] = rec(s,t,i+1,j+1) + rec(s,t,i+1,j);
    }
public:
    int numDistinct(string s, string t) {
        dp.assign(s.size() + 1, vector<int>(t.size() + 1, -1));
        return rec(s,t,0,0);
    }
};