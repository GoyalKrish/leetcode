class Solution {
public:
    int scoreOfParentheses(string s) {
        int multiplier = 0;
        int ans = 0;
        for(const auto& c : s){
            if(c == '('){
                ++multiplier;
            }
            if(c == ')'){
                --multiplier;
            }

            ans += multiplier;
        }
        return ans;
    }
};