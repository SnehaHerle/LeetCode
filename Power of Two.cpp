//https://leetcode.com/explore/featured/card/june-leetcoding-challenge/540/week-2-june-8th-june-14th/3354/

//Power of Two


class Solution {
public:
    bool isPowerOfTwo(int n) 
    {
        int flag = 1;
        if(n==1)
            return true;
        else if (n<=0)
            return false;
        else
        {
            while(n>=2)
            {
                if(n%2)
                {
                    flag = 0;
                    break;
                } 
                n = n/2;
            }
            if(flag)
                return true;
            else
                return false;
        }
            
        
    }
};
