class Solution {
public:
    bool isPerfectSquare(int num) 
    {
        if(num == 1 || num == 4)
            return true;
        
        else if(num == 0 || num == 2 || num == 3 || num == 5 || num == 6 || num == 7 || num == 8)
            return false;
        
        else if(num )
        
        for(int i = 3 ; (long long)i*i <= num ; i++)
        {
            long long temp = (long long)i*i;
            if( temp == num )
                return true;
            else if ( temp > num )
                return false;
        }
        return false;
    }
};

/*
Runtime Error Message:
Line 13: Char 27: runtime error: signed integer overflow: 46341 * 46341 cannot be represented in type 'int' (solution.cpp)
Last executed input:
2147483647

To avoid this, I have added (long long).
*/

// https://leetcode.com/explore/featured/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3324/

// Valid Perfect Square


class Solution {
public:
    bool isPerfectSquare(int num) 
    {
        
        if(num == 0 || num == 2 || num == 3)
            return false;
        else if(num == 1)
            return true;
        
        int beg = 1 , end = num, mid;
        while(beg<=end)
        {
            mid = beg + ((end-beg)/2);
            if((long long)mid*mid == num)
                return true;
            if((long long)mid*mid > num)
                end = mid-1;
            else
                beg = mid+1;
                
        }
        return false;
        
        

    }
};

/*
Runtime Error Message:
Line 13: Char 27: runtime error: signed integer overflow: 46341 * 46341 cannot be represented in type 'int' (solution.cpp)
Last executed input:
2147483647

2,147,483,647
The number 2,147,483,647 (or hexadecimal 7FFFFFFF16) is the maximum positive value for a 32-bit signed binary integer in computing. It is therefore the maximum value for variables declared as integers (e.g., as int ) in many programming languages, and the maximum possible score, money, etc. for many video games.

To avoid this, I have added (long long).
*/


-- Using Binary Search
