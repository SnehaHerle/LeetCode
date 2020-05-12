// https://leetcode.com/explore/featured/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3327/

// Single Element in a Sorted Array

class Solution 
{
public:
    /*
    Since all elements occur 2 times and only 1 element occurs once,
    we can decide which side to go after nums[mid] based on,
    the number of elements on the side which matches with nums[mid].
    */
    
    int singleNonDuplicate(vector<int>& nums) 
    {
        int count = 0 , beg = 0 , end = nums.size()-1 , mid = 0;
        
        if(nums.size() == 1)
            return nums[0];
        
        while(beg <= end)
        {
            mid = beg + (end-beg)/2;
            if( mid == 0 && nums[mid] != nums[mid+1])
            {
                cout<<nums[mid];
                return nums[mid];
            }
            else if( mid == nums.size()-1 && nums[mid] != nums[mid-1])
            {
                cout<<nums[mid];
                return nums[mid];
            }
            else if( nums[mid] != nums[mid-1] && nums[mid] != nums[mid+1] )
            {
                cout<<nums[mid];
                return nums[mid];
            }
            else if( nums[mid] == nums[mid-1] )
            {
                count = (mid-1);
                
                if( count%2 != 0 )
                    end = mid-1;
                else
                    beg = mid+1;
            }
            else if( nums[mid] == nums[mid+1] )
            {
                count = (nums.size()-1) - (mid+1);
                
                if( count%2 != 0 )
                    beg = mid+1;
                else
                    end = mid-1;
            }
        }
        return -1;
    }
};
