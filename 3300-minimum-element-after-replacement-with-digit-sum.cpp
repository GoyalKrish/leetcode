class Solution {
public:
    int minElement(vector<int>& nums) {
        int ans = INT_MAX;
        const auto sumOfDig = [&](int num) -> int{
            int ans = 0;
            while(num){
                ans += num%10;
                num/=10;
            }
            return ans;
        };


        for(const auto& num : nums){
            ans = min(ans, sumOfDig(num));
        }

        return ans;
    }
};