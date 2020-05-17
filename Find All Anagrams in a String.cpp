//https://leetcode.com/explore/featured/card/may-leetcoding-challenge/536/week-3-may-15th-may-21st/3332/

//Find All Anagrams in a String

/*
1) Store counts of frequencies of pattern in first count array countP[]. Also store counts of frequencies of characters in first window of text in array countTW[].

2) Now run a loop from i = M to N-1. Do following in loop.
…..a) If the two count arrays are identical, we found an occurrence.
…..b) Increment count of current character of text in countS[]
…..c) Decrement count of first character in previous window in countS[]

3) The last window is not checked by above loop, so explicitly check it.
*/


class Solution {
public:
    
    bool compare(char countP[], char countS[])
    {
        for(int i = 0 ; i < 256 ; i++)
        {
            if(countP[i] != countS[i])
                return false;
        }
        return true;
    }
    
    vector<int> findAnagrams(string s, string p) 
    {
        char countP[256] = {0}, countS[256] = {0};
        
        vector <int> ans;
        
        int p_len = p.length(), s_len = s.length(), i = 0;
        
        if(s.length() < p.length()) 
            return {};
        
        
        for(i = 0 ; i < p_len ; i++)
        {
            countP[p[i]]++;
            countS[s[i]]++;
        }
        
        for(i = p_len ; i < s_len ; i++)
        {
            if( compare(countP, countS) )
                ans.push_back(i-p_len);
            
            countS[s[i]]++;
            countS[s[i-p_len]]--;
        }
        
        if( compare(countP, countS) )
                ans.push_back(s_len-p_len);
        
        return ans;
        
    }
};
