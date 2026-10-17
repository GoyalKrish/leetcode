class Solution {
public:
    bool isHappy(int n) {
        set<int> mp;
        while (n!=1){
            if(mp.find(n) != mp.end()) return false;
            mp.insert(n);

            int sum = 0;
            while(n){
                sum += (n%10 )* (n%10);
                n/=10;
            }
            n = sum;
        }

        return true;
    }
};