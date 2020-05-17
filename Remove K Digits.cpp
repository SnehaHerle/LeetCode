// https://leetcode.com/explore/featured/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3328/

// Remove K Digits


class Solution {
public:

string removeKdigits(string num, int k) 
{
        if( num.length() == k )
            return "0";
    
        if( k == 0 )
            return num;
        
        stack<char> s, t;
        
        //store all correct elements in stack one by one.
        //if the top of the stack is greater than current element read, keep popping till you reach an element..
        //..which is less than or equal in the stack.
	
        for(int i = 0 ; i < num.length() ; i++)
        {
            while(k && !s.empty() && int(s.top())>int(num[i]))
            {
                s.pop();
                k--;
            } 
            s.push(num[i]);  //push the first element.
        }

        //if after all correct elements are present in the stack, k is not yet 0..
        //..then pop from the stack as the elements are now in sorted order..
        //..so we can easily pop the top.
    
        if(k) 
            while(k--)
            {
                s.pop();
            }
    
        //now the correct elements are there in the stack ut when we print them, they will be in reverse.
        //so we take another stack to avoid this.
    
        while(!s.empty())
        {
            t.push(s.top());
            s.pop();
        }
    
        //now if there are leading zeroes,then the top of the stack will have them..
        //so we will keep popping top most zeroes till the size of stack is 1.
    
        while(t.top()=='0'&&t.size()!=1)
            t.pop();
    
        //we will now concatenate the answer from the stack to num
        num = "";
    
        while(!t.empty())
        {
            num = num + t.top();
            t.pop();
        }
    
        return num;
    }
};
