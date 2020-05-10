class Solution {
public:
    
    //Bayer Moore Voting Algorithm
    //Time is O(N)
    //Space is O(1)
    //As it is given that majority elements alawways exists, so I removed the step of verifying the... 
    //...majority element returned. Verfication is needed as the algorithm return incorrect answer...
    //...when a majority element is not present.
    
    int majorityElement(vector<int>& nums) 
    {
        int count = 0, j = 0, len = nums.size(), majority_element = 0;
        
        for( j=0 ; j<len ; j++ )
        {
            if(count==0)
            {
                count++;
                majority_element = nums[j];
            }
            else if(nums[j] == majority_element)
            {
                count++;
            }
            else if(nums[j] != majority_element)
            {
                count--;
            }
        }
        return majority_element;
                  
    }
};

//https://leetcode.com/explore/featured/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3321/

//https://gregable.com/2013/10/majority-vote-algorithm-find-majority.html

//Majority Element
