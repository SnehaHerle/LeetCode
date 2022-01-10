class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> result(nums.size());
        int j = 0;
        for(int i = 0; i < n; i++){
            result[j] = nums[i];
            j++;
            result[j] = nums[i+n];
            j++;
        }
        return result;
    }
};
