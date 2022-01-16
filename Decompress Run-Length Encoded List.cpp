class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> decompressedArray;
        int freq = 0, val = 0;
        for(int i = 0; i < nums.size(); i = i + 2){
            freq = nums[i];
            val = nums[i+1];
            for(int j = 1; j <= freq; j++){
                decompressedArray.push_back(val);
            }
        }
        return decompressedArray;
    }
};
