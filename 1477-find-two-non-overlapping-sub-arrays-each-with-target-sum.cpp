class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {
        const unsigned int n = arr.size();
        vector<int> prefix(n,0);
        vector<int> suffix(n,0);
        prefix[0] = arr[0];
        suffix[n-1] = arr[n-1];
        for(int i = 1 ; i < n ; ++i){
            prefix[i] = arr[i] + prefix[i-1];
            suffix[n-i-1] = arr[n-i - 1] + suffix[n-i];
        }

        // for(const auto& x : prefix) cout << x << " ";
        // cout << endl;
        // for(const auto& x : suffix) cout << x << " ";

        int ans = INT_MAX;

        for(int i = 0 ; i < n ; ++i){
            int sum = prefix[i] + suffix[i];
            if(sum == target)
            ans = min(sum , ans);
        }
        if(ans == INT_MAX) return -1;
        return ans;
    }
};