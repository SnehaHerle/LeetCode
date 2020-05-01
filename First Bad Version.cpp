//https://leetcode.com/explore/featured/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3316/

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

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
