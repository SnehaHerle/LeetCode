//https://leetcode.com/explore/featured/card/july-leetcoding-challenge/544/week-1-july-1st-july-7th/3381/
//Hamming Distance

class Solution {
public:
    int hammingDistance(int x, int y) 
    {
        int n = (x ^ y), count = 0;
        cout<<(x ^ y);
        while (n != 0)
        {
            n = n & (n-1);
            count++;
        }
        return count;
    }
};
