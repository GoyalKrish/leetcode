class Solution {
public:
    vector<vector<int>> getSkyline(vector<vector<int>>& buildings) {
        vector<vector<int>> events;
        for(const auto& b : buildings){
            events.push_back({b[0],b[2],1});
            events.push_back({b[1],b[2],0});
        }
        sort(events.begin(),events.end());
        multiset<int> heights;
        heights.insert(0);
        vector<vector<int>> ans;

        for(const auto& e : events){
            cout << e[0] << " " << e[1] << " " << e[2] << endl;
        }
        
        int i = 0;
        while(i < events.size()){
            int x = events[i][0];
            int oldMax = *heights.rbegin();

            while(i < events.size() && events[i][0] == x){

                if(events[i][2]){
                    heights.insert(events[i][1]);
                }else{
                    heights.erase(heights.find(events[i][1]));
                }
                ++i;
            }

            int newMax = *heights.rbegin();
            if(newMax != oldMax){
                ans.push_back({x,newMax});
            }
        }
        return ans;
    }
};