//https://leetcode.com/explore/featured/card/june-leetcoding-challenge/540/week-2-june-8th-june-14th/3355/

//Is Subsequence

//O(N)


class Solution {
public:
    bool isSubsequence(string s, string t) 
    {
        int s_len = s.length(), t_len = t.length(), i = 0, j = 0;
        
        for( i = 0 ; i < t_len && j < s_len ; i++ )
        {
            if( s[j] == t[i])
                j++;
        }
        return (j==s_len);
    }
};
