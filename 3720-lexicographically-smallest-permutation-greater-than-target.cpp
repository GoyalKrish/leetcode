class Solution {
public:
    string lexGreaterPermutation(string s, string target) {
        while(s > target && prev_permutation(s.begin(), s.end()));
        while(s <= target && next_permutation(s.begin(),s.end()));


        if(s>target ) return s;
        return "";
    }
};