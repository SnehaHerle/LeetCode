// https://leetcode.com/explore/featured/card/may-leetcoding-challenge/537/week-4-may-22nd-may-28th/3337/

// Sort Characters By Frequency

class Solution {
       
public:
    
    string frequencySort(string s) 
    {
        int size = s.size();
        
        unordered_map<char, int>hmap;
        
        for(int i=0;i<size;i++)
        {
            if(hmap.find(s[i])!=hmap.end())hmap[s[i]]++;
            else hmap[s[i]] = 1;
        }
        
        sort(
            s.begin(), 
            s.end(), 
            [&](char a, char b)
            {
            if(hmap[a] > hmap[b]) 
                return true;
            if(hmap[a] == hmap[b]) 
                return a<b;
            return false;
            }
            );
            return s;
    }
};
