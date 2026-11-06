class Solution {
public:
    vector<int> countServers(int n, vector<vector<int>>& logs, int x, vector<int>& queries) {
        sort(queries.begin(),queries.end());
        sort(logs.begin(), logs.end(), [](const vector<int>& a, const vector<int>& b){
            return a[1] < b[1];
        });


        // for(const auto& vec : logs){
        //     for(const auto& lo : vec){
        //         cout << lo << ' ';
        //     }
        //     cout << endl;
        // }


        int l = 0, r = 0;
        int N = logs.size();

        
        return {};
    }
};