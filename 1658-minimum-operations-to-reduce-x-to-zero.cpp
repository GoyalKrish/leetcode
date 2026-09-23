class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int totalSum = accumulate(nums.begin(), nums.end(), 0);
        int target = totalSum - x;
        int l = 0, r = 0;
        int n = nums.size();
        int curr = 0;
        int ans = -1;
        while(r< n){
            curr += nums[r];
            while(curr > target && l <= r){
                curr -= nums[l];
                ++l;
            }
            if(curr == target){
                ans = max(ans, r - l + 1);
            }
            ++r;
        }

        if(ans == -1) return -1;
        else return n - ans;

    }
};