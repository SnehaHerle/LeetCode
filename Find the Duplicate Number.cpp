//https://leetcode.com/explore/featured/card/june-leetcoding-challenge/542/week-4-june-22nd-june-28th/3371/
//Find the Duplicate Number
//Floyd Cycle Detection, assuming that the array elements are addresses of a linked list.
//Time Complexity - O(N)
//Space Complexity - O(1)

class Solution 
{
public:
    int findDuplicate(vector<int>& nums) 
    {
        
        
        int rabbit = nums[0], tortoise = nums[0];
        
        do  //This loop will break when a cycle is detected.
        {
            tortoise = nums[tortoise];
            rabbit = nums[nums[rabbit]];
        }while(tortoise != rabbit);
        
        //Now we are sure that a cycle is there.
        //Next we need to find the address which is starting the cycle.
        //This is our dupllicated element.
        
        tortoise = nums[0];
        
        while(tortoise != rabbit)
        {
            tortoise = nums[tortoise];
            rabbit = nums[rabbit];
        }
        
        return rabbit;
    }
};
