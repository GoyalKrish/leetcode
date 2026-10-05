class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> less, more;
        int countEq = 0;

        for(const auto& n : nums){
            if(n < pivot) less.push_back(n);
            else if(n > pivot) more.push_back(n);
            else ++countEq;

        }

        while(countEq--){
            less.push_back(pivot);
        }
        for(const auto& e : more) less.push_back(e);
        return less;
        
    }
};