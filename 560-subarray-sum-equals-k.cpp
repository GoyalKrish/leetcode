class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ans = 0;
        int x = 0;
        map<int,int> mp;
        mp[0] = 1;
        for(const auto& n : nums){
            x += n;
            ans += mp[x - k];
            ++mp[x];
        }
        return ans;
    }
};