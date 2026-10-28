class Solution {
    vector<vector<int>> dp;
    int m,n;
    
    void rec(const vector<vector<int>>& grid,const int x, const int y, int cost){
        if(x == m-1 && y == n-1){
            if(dp[x][y] == -1) dp[x][y] = cost^grid[x][y];
            else dp[x][y] = min(dp[x][y], cost ^ grid[x][y]);
            return dp[x][y];
        }

        
        cost = cost ^ grid[x][y];
        if(x < m - 1) rec(grid,x+1,y,cost);
        if(y < n - 1) rec(grid,x,y+1,cost);

    }
public:
    int minCost(vector<vector<int>>& grid) {
        m = grid.size();
        n = grid[0].size();
        dp.assign(m,vector<int>(n, -1));

        ans = INT_MAX;
        return rec(grid,0,0,1);
        
    }
};