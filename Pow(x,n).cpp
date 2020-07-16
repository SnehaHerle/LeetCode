//https://leetcode.com/explore/featured/card/july-leetcoding-challenge/546/week-3-july-15th-july-21st/3392/

/*
3^2 * 3^2 * 3 = 3^5   -- n is odd
3^2 * 3^2 = 3^4   -- n is even
*/


class Solution 
{
public:
    double myPow(double x, int n) 
    {
        if(n==0) return 1;
        
        double y = myPow(x,n/2);   // O(logN)
        
        if(n % 2 == 0)
            return y*y;
    
        else
            return n < 0 ? 1/x*y*y : x*y*y; 
        
    }
};
