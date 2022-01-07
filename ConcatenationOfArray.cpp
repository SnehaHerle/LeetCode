class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> newArray(2*nums.size());
        for(int i = 0; i < nums.size() ; i++){
            newArray[i] = nums[i];
            newArray[i+ nums.size()] = nums[i];
        }
        return newArray;
    }
};
