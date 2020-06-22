// https://leetcode.com/explore/featured/card/june-leetcoding-challenge/542/week-4-june-22nd-june-28th/3368/

// Single Number II

// O(N)

/*
110
011
110
011
110
011
111
---
474 --> 111 (Calculate sum bit by bit, then take the remainder by 3, now you have the required bit.) 

*/


class Solution 
{
public:
    int singleNumber(vector<int>& nums) 
    {
        int bits = 0, len = nums.size(), sum_at_bit_pos = 0, exp = 0, required_bit = 0;
        long ans = 0;
        for(bits = 0 ; bits < 32 ; bits++)  //32 because int is 32 bits.
        {
            sum_at_bit_pos = 0, required_bit = 0;
            for(int i = 0 ; i < len ; i++)
            {
                sum_at_bit_pos += nums[i]&1;
                nums[i] = nums[i]>>1;
            }
            required_bit = sum_at_bit_pos % 3;
            ans += required_bit*pow(2,exp);
            exp++;
        }
        return ans;
    }
};
