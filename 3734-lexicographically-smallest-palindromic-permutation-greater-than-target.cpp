class Solution {
public:
    string lexPalindromicPermutation(string s, string t) {
        int n = s.size();
        if(n == 1) return s > t ? s : "";

        vector<int> cnt(26, 0);
        for(const auto& c : s) cnt[c - 'a']++;

        string center = "";
        for(int i = 0 ; i < 26 ; ++i){
            if(cnt[i] % 2 != 0){
                if(center != ""){
                    return "";
                }
                center += 'a' + i;
            }
            cnt[i] /= 2;
        }

        string prefix = ""
        const auto check = [&](char c) -> bool {
            string pref = prefix;

            pref += c;

            for(int i = 25 ; i >= 0 ; --i){
                pref.append(cnt[i], 'a' + i);
            }

            string rev = pref;
            reverse(rev.begin(),rev.end());
            pref += center;
            pref += rev;

            return pref > t;
        };


        for(int i = 0 ; i < n/2 ; ++i){
            bool found = false;
            for(int j = 0 ; j < 26 ; ++j){
                if(cnt[j] == 0) continue;
            }

            --cnt[j];
            if(check('a' + j)){
                prefix.push_back('a' + j);
                found = true;
                break;
            }else ++cnt[j];
        }

    }
};