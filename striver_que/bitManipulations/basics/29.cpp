class Solution {
public:
    int divide(int dividend, int divisor) {
        
        //edge case

        if(dividend == divisor){
            return  1;
        }

        //sign 
        int sign = true; //+ve

        if(dividend >= 0 && divisor < 0){
            sign = false;
        }
        if(dividend < 0 && divisor >= 0){
            sign = false;
        }


        long long n = abs((long long)dividend);
        long long d = abs((long long)divisor);
        long long quotient = 0; //ans == quotient
        while(n >= d){
            int cnt = 0;

            //find the max in 2^n
            while(n >= (d<<(cnt+1))){ //d*(2^(cnt+1))
                cnt++;
            }
            quotient += (1LL<<cnt); //2^n
            n -= (d<<cnt); // d*(2^)
        }


        //overflow

        if(quotient >= (1LL<<31) && sign)return INT_MAX;
        if(quotient >= (1LL<<31) && !sign)return INT_MIN;

        return sign?quotient: -quotient;
    }
};