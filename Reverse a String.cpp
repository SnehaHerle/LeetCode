//https://leetcode.com/explore/challenge/card/june-leetcoding-challenge/539/week-1-june-1st-june-7th/3350/

//Reverse a String

//O(N)

//2 pointer approach


class Solution {
public:
    void reverseString(vector<char>& s) 
    {
        int len = s.size(), i = 0, j = 0;
        char temp;
        for(i = 0, j = len-1 ; i<=j ; i++, j--)
        {
            temp = s[i];
            s[i] = s[j];
            s[j] = temp;
        }
    }
};
