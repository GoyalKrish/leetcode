class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> st;
        for(const auto& n : nums) st.insert(n);
        int i = 0;
        while(++i){
            if(st.find(k * i) == st.end()) return k * i;
        }

        return 0;
    }
};