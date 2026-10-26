class Solution {
    public int maxProfit(int[] prices) {
      int ans = 0;
      int i = 0;
      int j = 1;

      while(j < prices.length){
        if(prices[i] < prices[j]){
            ans = Math.max(prices[j] - prices[i], ans);
        }else{
            while(i < j && prices[i] > prices[j]) ++i;
        }
        ++j;
      }
      return ans;
    }
}