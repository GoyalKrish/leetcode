class Solution {
    void reverse(string& s, int i, int j){
        while(i < j){
            char temp = s[i];
            s[i] = s[j];
            s[j] = temp;

            ++i;
            --j;
        }
    }
public:
    string reverseParentheses(string s) {
        int i = 0;
        int n = s.size();
        string ans = "";

        while(i < n){
            if(s[i] == '(' || s[i] == ')'){
                int stk = (s[i] == '('?1:-1);
                int j = i + 1;
                while(j < n){
                    if(s[j] == '(') ++stk;
                    if(s[j] == ')') --stk;

                    if(stk == 0) break;
                    ++j;
                }

                reverse(s,i,j);
                s[i] = '_';
                s[j] = '_';
            }
            ++i;
        }

        i = 0;
        while(i < n){
            if(s[i] != '(' && s[i] != ')' && s[i] != '_')
                ans += s[i];

            ++i;
        }
        return ans;
    }
};