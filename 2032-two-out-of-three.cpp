class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        unordered_set<int> a(nums1.begin(), nums1.end());
        unordered_set<int> b(nums2.begin(), nums2.end());
        unordered_set<int> c(nums3.begin(), nums3.end());

        unordered_set<int> all;
        all.insert(a.begin(), a.end());
        all.insert(b.begin(), b.end());
        all.insert(c.begin(), c.end());

        vector<int> ans;

        for (int val : all) {
            int count = a.count(val) + b.count(val) + c.count(val);

            if (count >= 2) {
                ans.push_back(val);
            }
        }

        return ans;
    }
};