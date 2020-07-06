//https://leetcode.com/explore/featured/card/july-leetcoding-challenge/544/week-1-july-1st-july-7th/3382/
//Plus One


class Solution 
{
public:
    vector<int> plusOne(vector<int>& digits) 
    {
        vector<int> ans;
        int carry = 0;
        
        if(digits.size() == 1 && digits[0] == 9)
        {
            digits[0] = 0;
            digits.insert(digits.begin(), 1);
            return digits;
        }
        else
        {
        for ( int i = digits.size()-1 ; i >= 0 ; i-- )
        {
            if(digits[i] + 1 < 10  && i == digits.size()-1)
            {
                digits[i] = digits[i] + 1;
                return digits;
            }
            else if(digits[i] + 1 >= 10  && i == digits.size()-1) 
            {
                int r = (digits[i]+1) % 10;
                int q = (digits[i]+1) / 10;
                digits[i] = r;
                digits[i-1] = digits[i-1] + q;
                cout<<digits[i-1];
            }
            else if(digits[i] >= 10 && i == 0)
            {
                int r = (digits[i]) % 10;
                int q = (digits[i]) / 10;
                digits[i] = r;
                int carry = q;
                digits.insert(digits.begin(), carry);
            }
            else if(digits[i] >= 10) 
            {
                int r = (digits[i]) % 10;
                int q = (digits[i]) / 10;
                digits[i] = r;
                digits[i-1] = digits[i-1] + q;
                cout<<digits[i-1];
            }
            else
            {
                return digits;
            }        
        }
        }
        return digits;
    }
};
