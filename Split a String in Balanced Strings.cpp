class Solution {
public:
    int balancedStringSplit(string s) {
        int count = 0, result = 0;
        for(int i = 0; i  < s.length() ; i++){
            if(s[i] == 'L')
                count++;
            else 
                count--;
            if(count == 0)
                result++;
        }
        return result;
    }
};
