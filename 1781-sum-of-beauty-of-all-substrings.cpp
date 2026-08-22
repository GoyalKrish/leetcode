class Solution {
public:
    int beautySum(string s) {
        
        int l = 0;

        int ans = 0;
        for(int i = 0 ; i < s.size() ; ++i){
            unordered_map<char,int> freq;
            l = i;
            while(l < s.size()){
                int minf = INT_MAX;
                int maxf = INT_MIN;
                freq[s[l]]++;
                for(const auto& f : freq){
                    maxf = max(maxf,f.second);
                    minf = min(minf,f.second);
                }

                ans += (maxf - minf);

                ++l;
            }
        }

        return ans;

    }
};