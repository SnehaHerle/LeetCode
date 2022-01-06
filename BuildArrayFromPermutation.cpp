class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> ans(nums.size());
        int index;
        for(int i = 0; i < nums.size(); i++){
            index = nums[i];
            ans[i] = nums[index];
        }
        return ans;
    }
};
