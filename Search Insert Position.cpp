//https://leetcode.com/explore/featured/card/june-leetcoding-challenge/540/week-2-june-8th-june-14th/3356/

//Search Insert Position

//O((logN)  - Binary Search

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        int ans = 0, flag = 0, beg = 0, end = nums.size()-1 , mid = 0;
        if(target < nums[0])
        {
            cout<<target<<" "<<nums[0];
            ans = 0;
        }
        else if(target > nums[end])
            ans = end+1;
            
        
        else
        {
            while(beg<=end)
            {
                mid = (beg + end)/2;
                if(nums[mid] == target)
                {
                    ans = mid;
                    flag = 1;
                    break;
                }
                else if(nums[mid] < target )
                {
                    if(nums[mid+1] > target)
                    {
                        ans = mid+1;
                        flag = 1;
                        break;
                    }
                    else
                        beg = mid + 1;
                }
                else
                    end = mid - 1;
            }
            if(flag == 0)
                ans = mid;
            
        }
        return ans;
    }
};
