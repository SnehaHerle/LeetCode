class Solution {
public:
    unsigned int findComplement(unsigned int num) 
    {
        
        // Find number of bits in the given integer 
    int number_of_bits = floor(log2(num))+1; 
    unsigned int answer;
  
   // XOR the given integer with poe(2,  
   // number_of_bits-1 and print the result  
        answer = 1 << number_of_bits; 
        return (answer-1)^ num;
        
    }
};

/*
An efficient approach to this problem is as follows:
1. Find the number of bits in the given integer
2. XOR the given integer with 2^number_of_bits-1
*/
