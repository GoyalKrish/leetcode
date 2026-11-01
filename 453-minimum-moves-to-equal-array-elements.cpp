class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mi = INT_MAX;
        long long su = 0;
        for(const int& n : nums){
            mi = min(mi,n);
            su += n;
        }

        return su - nums.size() * mi;
    }
};