class Solution {
public:
    int countPrimes(int n) {
        if(n <= 2) return 0;
        vector<bool> a(n,true);
        a[0] = false;
        a[1] = false;

        int ans = 0;
        for(int i = 2 ; i * i < n ; ++i){
            if(a[i]){
                for(int j = i * i ; j < n ; j+=i) a[j] = false;
            }
        }

        return count(a.begin(),a.end(),true);


    }
};