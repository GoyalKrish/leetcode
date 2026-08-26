class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {

        string ans = "";
        for(const auto& word : words){
            long long sum = 0;
            for(const auto& c : word){
                sum += weights[(int)(c - 'a')];
            }
            sum = sum % 26;
            ans += (char)('z' - sum);
        }
        return ans;
    }
};