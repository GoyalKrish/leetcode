class Solution {
public:
    int countPrimes(int n) {
        vector<bool> a(n+1,true);
        a[0] = false;
        a[1] = false;

        int ans = 0;
        for(int i = 2 ; i * i < n ; ++i){
            if(a[i]){
                for(int j = i * i ; j < n ; j+=i) a[j] = false;
            }
        }

        for(int i = 2 ; i < n ; ++i) if(a[i]) ++ans;

        return ans;


    }
};