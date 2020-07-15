//https://leetcode.com/explore/featured/card/july-leetcoding-challenge/546/week-3-july-15th-july-21st/3391/

class Solution {
public:
    string reverseWords(string s) {
        string word = "";   // Individual word
        int n = s.length();
        int f=0;
        string out ="";   // Output String
        stack<string> stk;
        int sc=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]!=' ')
            {
                word+=s[i];
                f=1;
            }
            else
            {
                if(f==1)  //If word was found until now
                {
                    stk.push(word);
                    word ="";  //reset the word
                    sc++;
                }
                f=0;
            }
        }
        if(f==1)  //If there was a word remaining
        {
            stk.push(word);
            sc++;
        }
        while(!stk.empty())
        {
            out+=stk.top();
            if(sc>1)  //Dont add space after last word
                out+=" ";
            stk.pop();
            sc--;
        }
        return out;
    }
};
