class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int i = 0, j = 0, co = 0;
        int asize = INT_MAX;
        int n = s.size();

        vector<string> candidates;
        while(j < n){
            co += s[j] == '1' ? 1 : 0;
            
            while(co > k || s[i] == '0'){
                co -= s[i] == '1' ? 1 : 0;
                ++i;
            }

            if(co == k){
                if(j - i + 1 < asize){
                    asize = j - i + 1;
                    candidates.clear();
                    candidates.push_back(s.substr(i,asize));
                }else if(j - i + 1 == asize){
                    candidates.push_back(s.substr(i,asize));
                }
            }

            ++j;
        }
        if(candidates.size() == 0) return "";
        sort(candidates.begin(), candidates.end());
        
        for(const auto& c : candidates) cout << c << endl;

        return candidates[0];
    }
};