class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
            sum = sum + nums[i];
        }
        int expected_sum = (nums.size()*(nums.size()+1))/2;
        return expected_sum - sum;
    }
};
