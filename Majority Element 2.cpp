class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) 
    {
        int i = 0, j = 0, len = nums.size(), count_1 = 0, count_2 = 0, majority_1 = 0, majority_2 = 0;
        vector <int> majority_element;
        
        for(i = 0; i < len; i++)
        {   
            if(nums[i] == majority_1)
            {
                count_1++;
            }
            else if(nums[i] == majority_2)
            {
                count_2++;
            }
            else if(count_1 == 0)
            {
                majority_1 = nums[i];
                count_1++;
            }
            else if(count_2 == 0)
            {
                majority_2 = nums[i];
                count_2++;
            }
            else
            {
                count_1--;
                count_2--;
            }
        }
        cout<<majority_1<<" "<<majority_2;
        
        count_1 = count_2 = 0;
        
        for(i = 0; i < len; i++)
        {
            if (nums[i] == majority_1)
                count_1++;
            
            else if (nums[i] == majority_2)
                count_2++;
        }
        
        if (count_1 > len/3)
            majority_element.push_back(majority_1);
        
        if (count_2 > len/3)
            majority_element.push_back(majority_2);
        
        return majority_element;
    }
};

//https://leetcode.com/problems/majority-element-ii/
