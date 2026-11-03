class Solution {
public:
    int minMoves(vector<int>& nums) {
        int ma = INT_MIN;
        int ans = 0;
        for(const int& num : nums) if(num > ma) ma = num;

        for(const int& num : nums) ans += ma - num;
        
        return ans;
    }
};