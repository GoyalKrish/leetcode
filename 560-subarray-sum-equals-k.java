class Solution {
    public int subarraySum(int[] nums, int k) {
        HashMap<Integer, Integer> mp = new HashMap<>();
        mp.put(0,1);

        int ans = 0;
        int sum = 0;

        for(int num : nums){
            sum += num;

            ans += mp.getOrDefault(sum - k, 0);

            mp.put(sum, mp.getOrDefault(sum, 0) + 1);
        }
        return ans;
    }
}