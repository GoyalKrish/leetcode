class Solution {
public:
    int countPrimes(int n) {
        vector<bool> a(n+1,true);
        int ans = 0;
        for(int i = 2 ; i < n ; ++i){
            int multi = 1;
            if(a[i]){
                ++ans;
                while(i*multi < n){
                    a[multi * i] = false;
                    ++multi;
                }
            }
        }

        return ans;


    }
};