class Solution {
public:
    int minMoves(vector<string>& classroom, int energy) {
        int startX = 0, startY = 0;
        for(int i = 0 ; i < m ; ++i){
            for(int j = 0 ; j < n ; ++j){
                if(cr[i][j] == 'S'){
                    startX = i;
                    startY = j;
                    goto endOfSearch;
                }
            }
        }
        endOfSearch:

        
    }
};