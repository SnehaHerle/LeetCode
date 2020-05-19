// https://leetcode.com/explore/featured/card/may-leetcoding-challenge/536/week-3-may-15th-may-21st/3333/

// Permutation in String

// Same logic as anagram.

// Hashing concept.


class Solution {
public:
    bool compare(char countP[], char countS[])
    {
        for(int i = 0 ; i < 26 ; i++)
        {
            if(countP[i] != countS[i])
                return false;
        }
        return true;
    }
      
    
    bool checkInclusion(string p, string s) 
    {
        char countP[26] = {0}, countS[26] = {0};
        int p_len = p.length(), s_len = s.length(), i = 0;
        
        if(s.length() < p.length()) 
            return false;
        
        
        for(i = 0 ; i < p_len ; i++)
        {
            countP[p[i]-'a']++;
            countS[s[i]-'a']++;
        }
        
        if(s.length() == p.length()) 
        {
            if( compare(countP, countS) )
                return true;
        }
            
        
        for(i = p_len ; i < s_len ; i++)
        {
            if( compare(countP, countS) )
                return true;
            
            countS[s[i]-'a']++;
            countS[s[i-p_len]-'a']--;
        }
        
        if( compare(countP, countS) )
                return true;
        
        return false;
        
    }
};
