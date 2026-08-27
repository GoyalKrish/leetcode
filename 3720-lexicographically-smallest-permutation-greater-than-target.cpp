class Solution {
public:
    string lexGreaterPermutation(string s, string t) {
        vector<int> cnt(26,0);
        for(int i = 0 ; i < s.size() ; ++i){
            cnt[s[i] - 'a']++;
            cnt[t[i] - 'a']--;
        }


        for(int i = t.size() - 1 ; i >= 0 ; --i){
            cnt[t[i] - 'a']++;

            if(*min_element(cnt.begin(), cnt.end()) < 0) continue;

            for(int j = t[i] - 'a' + 1; j < 26 ; ++j){
                if(cnt[j]){
                    cnt[j]--;
                    t[i] = 'a' + j;
                    t.resize(i + 1);
                    string rem = "";
                    for(int i = 0 ; i < 26 ; ++i){
                        while(cnt[i]--){
                            rem += 'a' + i;
                        }
                    }

                    return t + rem;
                }
            }
            
        }
        return "";
    }
};