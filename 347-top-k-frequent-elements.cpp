class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mp;
        for(const auto& num : nums) ++mp[num];
        vector<vector<int>> buck(nums.size()+1, vector<int>());
        for(auto [num, freq] : mp){
            buck[freq].push_back(num);
        }
        vector<int> ans;
        for(int i = buck.size() - 1 ; i >= 0 ; --i){
            if(ans.size() == k) return ans;
            for(int j = 0 ; j < buck[i].size() && ans.size() < k ; ++j){
                ans.push_back(buck[i][j]);
            }
        }
        return ans;
    }
};