class Solution {
    vector<vector<int>> vis;
    int m,n;
    int ans;

    int k;
    vector<vector<int>> dir = {{0,1},{1,0},{0,-1},{-1,0}};

    int findValue(const vector<vector<int>>& grid,const int i, const int j){
        if(grid[i][j] == 0) return 0;
        int val = grid[i][j];
        queue<vector<int>> q;
        q.push({i,j});
        vis[i][j] = 1;

        while(!q.empty()){
            vector<int> curr = q.front();
            q.pop();

            for(vector<int> d : dir){
                int dx = curr[0] + d[0];
                int dy = curr[1] + d[1];
                if(
                    dx < 0 ||
                    dy < 0 ||
                    dx >= m ||
                    dy >= n ||
                    vis[dx][dy] != 0 ||
                    grid[dx][dy] == 0
                ) continue;

                val += grid[dx][dy] % k;
                q.push({dx,dy});
                vis[dx][dy] = 1;
            }
        }
        // cout << val << endl;
        return val;
    }


public:
    int countIslands(vector<vector<int>>& grid, int kt) {
        m = grid.size();
        n = grid[0].size();
        k = kt;

        vis.resize(m,vector<int>(n,0));

        ans = 0;

        for(int i = 0 ; i < m ; ++i){
            for(int j = 0 ; j < n ; ++j){
                if(grid[i][j] != 0 && vis[i][j] == 0){
                    int val = findValue(grid,i,j);

                    ans += val % k == 0;
                }
            }
        }

        return ans;
    }
};