class Solution {
public:
    int minAddToMakeValid(string s) {
        int bal = 0;
        int ans = 0;
        for(const auto& c : s){
            if(c == '(') ++bal;
            if(c == ')'){
                if(bal <= 0) ++ans;
                else --bal;
            }
        }

        return ans + abs(bal);
    }
};