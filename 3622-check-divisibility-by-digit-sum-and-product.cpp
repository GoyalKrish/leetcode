class Solution {
public:
    bool checkDivisibility(int n) {
        long long sum = 0;
        long long prod = 1;

        int temp = n;
        while(temp){
            int dig = temp % 10;

            sum += dig;
            prod *= dig;
            temp /= 10;
        }

        return (n % (sum + prod) == 0);
    }
};