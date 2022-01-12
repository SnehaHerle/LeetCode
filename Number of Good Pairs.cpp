class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        vector<int> hashmap(101, 0);
        int count = 0;
        for(int i = 0; i < nums.size(); i++){
            hashmap[nums[i]] += 1; 
        }
        for(int i = 0; i < 101; i++){
            if(hashmap[i] != 0){
                int temp = (hashmap[i] * (hashmap[i] - 1)) / 2;
                count += temp;
            }
        }
        return count;
    }
};
