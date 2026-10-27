class Solution {
public:
    vector<string> createGrid(int m, int n) {

        string first = string(n-1, '#'); first += '.';
        vector<string> ans(m, first);

        string second = string(n, '.');

        ans[0] = second;
        return ans;
    }
};