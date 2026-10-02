class Solution {
    void rec(vector<string>& ans,string s,const int &n, int o){
        if(s.size() >= 2*n){
            ans.push_back(s);
            return;
        }
        if(o < n) rec(ans,s+'(',n,o+1);
        if(s.size() - o < o) rec(ans,s+')',n,o);
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        rec(ans,"",n,0);
        return ans;
    }
};