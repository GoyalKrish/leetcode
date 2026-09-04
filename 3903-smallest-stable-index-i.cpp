class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int> mi(nums.size(), INT_MAX);
        mi[nums.size() - 1] = nums[nums.size() - 1];
        for(int i = nums.size() - 2 ; i >= 0 ; --i){
            mi[i] = min(mi[i+1], nums[i]);
        }
        int ans = 0;
        int ma = nums[0];

        for(int i = 0 ; i < nums.size() ; ++i){
            ma = max(nums[i],ma);
            if((ma - mi[i]) <= k) return i;
        }
        return -1;
    }
};