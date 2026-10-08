    class Solution {
public:
    string removeOuterParentheses(string s) {
        int bal = 0;
        string ans = "";
        for(const char& c : s){
            if(c == '('){
                if(bal != 0) ans += c;
                ++bal;
            }
            if(c == ')'){
                if(bal != 1) ans += c;
                --bal;
            }
        }

        return ans;
    }
};