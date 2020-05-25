//https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/submissions/

//Find All Numbers Disappeared in an Array

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        for(int i : nums)
            if(nums[abs(i)-1] > 0)
                nums[abs(i)-1] = -nums[abs(i)-1];
        
        vector<int> res;
        for(int i = 0; i < nums.size(); i++)
            if(nums[i] > 0)
                res.push_back(i+1);
        
        return res;
    }
};
