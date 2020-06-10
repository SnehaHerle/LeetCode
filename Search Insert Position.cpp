class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        if(target < nums[0])
            return 0;
        
        else
        {
            int beg = 0, end = nums.size()-1 , mid = 0;
            
            while(beg<=end)
            {
                mid = (beg + end)/2;
                if(nums[mid] == target)
                    return mid;
                else if(nums[mid] < mid )
                {
                    if(nums[mid+1] > target)
                        return mid+1;
                    else
                        beg = mid + 1;
                }
                else
                    end = mid - 1;
            }
            return mid;
            
        }
    }
};
