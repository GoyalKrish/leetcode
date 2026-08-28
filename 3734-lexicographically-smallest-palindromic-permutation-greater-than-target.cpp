class Solution {
public:
    string lexPalindromicPermutation(string s, string t) {
        int n = s.size();
        if(n == 1) return s > t ? s : "";

        vector<int> cnt(26);
        for(const auto& c : s) cnt[c - 'a']++;

        char center;
        for(int i = 0 ; i < 26 ; ++i){
            if(cnt[i] % 2 != 0){
                if(center){
                    return "";
                }
                center = 'a' + i;
            }
            cnt[i]>>1;
        }


        const auto check = [&](char c) -> bool {
            string pref = left;

            pref += c;

            for(int i = 0 ; i < 26 ; ++i){
                pref.append('a' + i, cnt[i]);
            }

            string rev = pref;
            reverse(rev.begin(),rev.end());
            pref += center;
            pref += rev;

            return pref > t;
        };


        for(int i = 0 ; i < n/2 ; ++i){
            

            for(int j = 25 ; j >= 0 ; --j){
                if(cnt[j])
            }
        }

    }
};