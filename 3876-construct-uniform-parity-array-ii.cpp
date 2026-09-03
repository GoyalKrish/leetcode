class Solution {
public:
    bool uniformArray(vector<int>& nums) {
        int eO= 0;
        int mn = nums[0];
        for(const auto& n : nums){
            mn = min(n,mn);
            eO += n&1;
        }

        if(mn&1) return true;
        return !eO;
    }
};