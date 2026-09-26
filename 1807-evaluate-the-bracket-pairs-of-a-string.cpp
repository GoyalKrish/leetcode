class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        map<string,string> mp;
        for(const auto& k : knowledge){
            mp[k[0]] = k[1];
        }

        int n = s.size();
        string ans = "";
        for(int i = 0; i < n ; ++i){
            if(s[i] == '('){
                string key = "";
                ++i;
                while(i < n && s[i] != ')'){
                    key += s[i];
                    ++i;
                }

                if(mp.find(key) != mp.end()){
                    ans += mp[key];
                }else{
                    ans += '?';
                }
            }else{
                ans += s[i];
            }
        }
        return ans;
    }
};