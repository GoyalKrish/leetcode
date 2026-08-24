class Solution {
public:
    int countPrimes(int n) {
        vector<bool> a(n+1,true);
        a[0] = false;
        a[1] = false;
        int rn = sqrt(n);
        int ans = 0;
        for(int i = 2 ; i <= rn ; ++i){
            int multi = 2;
            if(a[i]){
                while(i*multi < n){
                    a[multi * i] = false;
                    ++multi;
                }
            }
        }

        for(int i = 2 ; i < n ; ++i) if(a[i]) ++ans;

        return ans;


    }
};