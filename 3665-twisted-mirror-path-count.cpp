class Solution {
    int ans = 0;
    int modulo = 1e9+7;
    int m,n;
    vector<vector<int>> dp;

    void rec(const vector<vector<int>>& grid, int x, int y, bool goingRight){
        if(x == m - 1 && y == n - 1){
            ++ans;
            return;
        }

        

        //right
        if(y < n - 1){
            if(grid[x][y+1] == 1){
                if(x < m - 1) rec(grid,x+1,y+1,false);
            }else{
                rec(grid,x,y+1,true);
            }
        }

        if(x < m - 1){
            if(grid[x+1][y] == 1){
                if(y < n - 1) rec(grid,x+1,y+1,true);
            }else{
                rec(grid,x+1,y,false);
            }
        }
    }

public:
    int uniquePaths(vector<vector<int>>& grid) {
        m = grid.size();
        n = grid[0].size();

        dp.assign(m,vector<int>(n,-1));
        dp[m-1][n-1] = 1;

        rec(grid,0,0,false);
        // rec(grid,0,0,true);

        return ans;
    }
};