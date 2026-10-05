class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> less, more;
        int countEq = 0;

        for(const auto& nn : nums){
            if(nn < pivot) less.push_back(nn);
            else if(nn > pivot) more.push_back(nn);
            else ++countEq;

        }

        while(countEq--){
            less.push_back(pivot);
        }
        for(const auto& e : more) less.push_back(e);
        return less;
        
    }
};