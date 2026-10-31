class Solution {
    public int lengthOfLongestSubstring(String s) {
        HashMap<Character,Integer> count = new HashMap<>();

        int i = 0, j = 0;
        int ans = 0;
        int n = s.length();

        while(j < n){
            char c = s.charAt(j);
            count.put(c, count.getOrDefault(c, 0) + 1);

            while(count.get(c) > 1){
                char ci = s.charAt(i);
                count.put(ci, count.getOrDefault(ci, 0) - 1);
                ++i;
            }


            ans = Math.max(ans, j - i + 1);
            ++j;
        }
        return ans;
    }
}