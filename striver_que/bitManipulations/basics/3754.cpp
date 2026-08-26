class Solution {
public:
    long long sumAndMultiply(int n) {

        int rem = 0;
        // int temp = n;
        long long ans = 0;
        long long sum = 0;
        while (n != 0) {

            // get the last numo

            rem = n % 10;

            if (rem != 0) {
                ans = ans * 10 + rem;
                sum += rem;
            }

            n /= 10;
        }
        long long rev = 0;
        while (ans != 0) {
            rem = ans % 10;
            rev = rev * 10 + rem;
            ans /= 10;
        }
        long long final = 0;
        final = rev * sum;
        return final;
    }
};