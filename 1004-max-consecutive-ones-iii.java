class Solution {
    public int longestOnes(int[] nums, int k) {
       int i = 0, j = 0;
       int ans = 0;
       int t = k;
       
       while(j < nums.length){
        if(nums[j] == 0){
            --t;
            while(t < 0){
                if(nums[i] == 0) ++t;
                ++i;
            }

        }
        ans = Math.max(ans, j - i + 1);
        ++j;
       }

       return ans;
    }
}