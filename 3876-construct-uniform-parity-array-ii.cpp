class Solution {
public:
    bool uniformArray(vector<int>& nums) {
        int n = nums.size();
        if(n <= 1) return true;
        int oc = 0, ec = 0;
        for(const auto& n : nums){
            if(n%2==0) ec++;
            else oc++;
        }
        if(n == 2){
            if(oc == n || ec == n) return true;
            int odd, even;
            if(nums[0] % 2 == 0){
                odd = nums[1];
                even = nums[0];
            }else{
                odd = nums[0];
                even = nums[1];
            }
            return even - odd > 0;
        }
        return true;
    }
};