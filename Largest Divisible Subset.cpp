//https://leetcode.com/explore/featured/card/june-leetcoding-challenge/540/week-2-june-8th-june-14th/3359/

//Largest Divisible Subset.cpp

//Dynamic Programming - O(N^2)

/*
4 Steps to solve using DP

1. Sort the array nums, purpose of sorting is to make sure that all divisors of an element appear before it.
2. For each element in nums, find the length of largest subset and save in count[]
3. Pick the index of the largest element in count.
4. From nums[maxIndex] to 0, add every element belongs to the largest subset.

https://leetcode.com/problems/largest-divisible-subset/discuss/684740/Detailed-4-step-dp-solution-or-flow-diagram

*/

class Solution
{
    public:
vector<int> largestDivisibleSubset(vector<int>& nums) 
{
    if (nums.size() == 0) 
        return {};

    sort(nums.begin(), nums.end()); 

    vector<int> count(nums.size(), 1);
    
    for (int i = 1; i < nums.size(); i++) 
    {
        for (int j = i - 1; j >= 0; j--) 
        {
            if (nums[i] % nums[j] == 0) 
            {
                count[i] = max(count[i], count[j] + 1);
            }
        }
    }
    
    auto pos = max_element(count.begin(), count.end());
    int maxIndex = pos - count.begin();

    vector<int> result;
    int temp = nums[maxIndex];
    int currentCount = count[maxIndex];
    
    for (int i = maxIndex; i >= 0; i--) 
    {
        if (temp % nums[i] == 0 && count[i] == currentCount) 
        {
            result.push_back(nums[i]);
            temp = nums[i];
            currentCount--;
        }
    }
    return result;
}
};
