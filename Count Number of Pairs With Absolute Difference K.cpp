class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        vector<int> count(101, 0);
        int n = nums.size(), res = 0;
        for(auto a: nums)
        {
            count[a]++;
        }
        
        for(int i=1; i+k<101; ++i)
        {
            res += count[i]*count[i+k];
        }
        
        return res;
    }
};
