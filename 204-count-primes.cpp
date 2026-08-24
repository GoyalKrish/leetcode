class Solution {
public:
    int countPrimes(int n) {
        if(n <= 2) return 0;
        vector<int> a(n,1);
        a[0] = 0;
        a[1] = 0;

        int ans = 0;
        for(int i = 4 ; i < n ; i+=2) a[i] = 0;
        for(int i = 3 ; i * i < n ; i+=2){
            if(a[i]){
                for(int j = i * i ; j < n ; j+= 2 * i) a[j] = 0;
            }
        }
        return count(a.begin(),a.end(),1);
    }
};