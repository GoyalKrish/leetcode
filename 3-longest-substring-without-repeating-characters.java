class Solution {
    public int lengthOfLongestSubstring(String s) {
        int i = 0, j = 0;
        int ans = 0;

        HashMap<Character,Integer> count = new HashMap<>();
        while(j < s.length()){
            char c = s.charAt(j);
            count.put(c, count.getOrDefault(c,0) + 1);
            int freq = count.getOrDefault(c,0);
            if(freq > 1){
                while(i < j && s.charAt(i) != s.charAt(j)){
                    count.put(s.charAt(i), count.get(s.charAt(i)) - 1);
                    ++i;
                }
                ++i;
                count.put(c, count.get(c) - 1);
            }

            ans = Math.max(ans, j - i + 1);
            ++j;
        }

        return ans;
    }
}