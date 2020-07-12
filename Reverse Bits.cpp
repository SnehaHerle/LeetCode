//https://leetcode.com/explore/featured/card/july-leetcoding-challenge/545/week-2-july-8th-july-14th/3388/

class Solution {
public:
    uint32_t reverseBits(uint32_t num) 
    {
        unsigned int  NO_OF_BITS = sizeof(num) * 8, reverse_num = 0, i, temp; 
  
        for (i = 0; i < NO_OF_BITS; i++) 
        { 
            if(num & (1 << i)) 
                reverse_num |= (1 << ((NO_OF_BITS - 1) - i)); //reverse it here,
        } 
   
        return reverse_num; 
    }
};
