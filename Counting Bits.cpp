//https://leetcode.com/explore/featured/card/may-leetcoding-challenge/537/week-4-may-22nd-may-28th/3343/

//Counting Bits


class Solution {
public:
    vector<int> countBits(int num) 
    {
         
        
        int *result = new int[num+1];
        vector<int> p;
        p.push_back(0);
        result[0] = 0;
        
        for (int i = 1; i <= num; i++) {
            if ((i & 1) == 0) {
                result[i] = result[i / 2];
            } else {
                result[i] = result[i - 1] + 1;
            }
            p.push_back(result[i]);
        }
         
        return p;
    }
};
