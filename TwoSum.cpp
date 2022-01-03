class Solution {
public:
    vector<int> result;
    
    vector<int> twoSum(vector<int>& nums, int target) {    
    std::unordered_map<int, std::size_t> tmp;
        
    for (std::size_t i = 0; i < nums.size(); ++i) {
      if (tmp.count(target - nums[i])) {
        result.push_back(tmp[target - nums[i]]);
        result.push_back(i);  
        return result;
      }
      tmp[nums[i]] = i;
    }
    result.push_back(nums.size());
    result.push_back(nums.size()); 
    return result;
  }
};
