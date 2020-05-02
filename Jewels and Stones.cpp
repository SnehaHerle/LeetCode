/*
str1.find(str2)
The function returns the index of the first occurrence of sub-string, 
if the sub-string is not found it returns string::npos
(string::pos is static member with value as the highest possible for the size_t data structure).
*/

class Solution {
public:
    int numJewelsInStones(string J, string S) 
    {
        
  
  	    int len = S.length(), count = 0;
  	    for(int i = 0 ; i<len ; i++)
        {	
        size_t found = J.find(S[i]);
        if (found != string::npos)
        {
            count++;
        }
        }
         return count;     
        
    }
};
