class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        return rec1[2] > rec2[0] && rec1[3] > rec2[1];
    
    }
};