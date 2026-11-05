class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int ans = 0;

        for(const int& a : arr1){
            int is = 1;
            for(const int& b : arr2){
                if(abs(a - b) <= d){
                    is = 0;
                    break;
                }
            }
            ans += is;
        }

        return ans;
    }

};