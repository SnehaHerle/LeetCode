//https://leetcode.com/explore/featured/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3316/

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

/*
If you are setting mid = (left + right)/ 2 you have to be very careful. 
Unless you are using a language that does not overflow such as Python, left + right could overflow. 
One way to fix this is to use left + {right - left}/2  instead.

If you fall into this subtle overflow bug, you are not alone. 
Even Jon Bentley's own implementation of binary search had this overflow bug and remained undetected for over twenty years.
*/


class Solution {
public:
    
    int firstBadVersion(int n) 
    {
        long long int beg = 1, end = n, mid = 0;
        while(beg<=end)
        {
        mid = (beg + end)/2;
        if(!isBadVersion(mid))
        {
            beg = mid+1;
        }
        else
        {
            if(isBadVersion(mid-1))
            {
                end = mid-1;
            }
            else
                return mid;
        }
        }
        return -1;
        
    }
};
