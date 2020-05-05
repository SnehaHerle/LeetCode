class Solution {
public:
    int firstUniqChar(string s) 
    {
        long long int m = s.size();
        int freq[26];
        memset(freq, 0, sizeof(freq));
        
        for (long long int i = 0; i < m; i++) 
            freq[s[i] - 'a']++;
        
        for (long long int i = 0; i < m; i++) 
        {
            if (freq[s[i] - 'a'] == 1)
                return i;
        }
        return -1;
    }
};

//https://leetcode.com/explore/featured/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3320/
