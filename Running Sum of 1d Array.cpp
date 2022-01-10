class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> rSum(nums.size());
        int currentSum = 0;
        for(int i = 0; i < nums.size(); ++i){
            currentSum += nums[i];
            rSum[i] += currentSum;
        }
        return rSum;
    }
};
