class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        for(int i = 0 ; i < nums1.size() ; ++i){
            nums1[i] = abs(nums1[i] - nums2[i]);
        }
        int k = k1 + k2;
        sort(nums1.begin(),nums1.end());

        int i = nums1.size() - 1;
        while(k){
            
        }
    }
};