//Dutch National Flag Algorithm

//https://leetcode.com/explore/featured/card/june-leetcoding-challenge/540/week-2-june-8th-june-14th/3357/

//Sort Colors

//Sort colors in one pass - O(N)

class Solution {
public:
    void sortColors(vector<int>& nums) 
    {
        int mid = 0, high = nums.size()-1, low = 0;
        
        while(mid<=high)
        {
            switch(nums[mid])
            {
                case 0 : swap(nums[mid], nums[low]);
                            mid++;
                            low++;
                            break;
                    
                case 1 : mid++;
                        break;
                    
                case 2 : swap(nums[mid], nums[high]);
                            high--;
                            break;
            }
        }
    }
};
