//https://leetcode.com/problems/ransom-note/

//Ransom Note

//Hashing

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) 
    {
        long long int m = magazine.size(), r = ransomNote.size(), flag = 0;
        int freq[26];
        memset(freq, 0, sizeof(freq));
        
        for (long long int i = 0; i < m; i++) 
            freq[magazine[i] - 'a']++;
        
        for (long long int i = 0; i < r; i++) 
        {
            if (freq[ransomNote[i] - 'a'] != 0)
                freq[ransomNote[i] - 'a']--;
            else
                flag = 1;
        }
        if (flag == 0)
            return true;
        else
            return false;
    }
};
