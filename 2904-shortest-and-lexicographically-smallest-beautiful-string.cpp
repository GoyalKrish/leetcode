class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int i = 0, j = 0, co = 0;
        int n = s.size();
        string ans = "";

        vector<string> candidates;
        while(j < n){
            co += s[j] == '1';
            
            while(co > k || (i <= j && s[i] == '0')){
                co -= s[i] == '1';
                ++i;
            }

            if(co == k){
                string curr = s.substr(i, j - i + 1);
                if(ans.size() == 0 ||
                    ans.size() > curr.size() ||
                    ans > curr){
                        ans = curr;
                    }
            }

            ++j;
        }
        

        return ans;
    }
};