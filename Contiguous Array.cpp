//https://leetcode.com/explore/featured/card/may-leetcoding-challenge/537/week-4-may-22nd-may-28th/3341/

//Contiguous Array


/*LOGIC:
1. Replace all zeroes by minus ones.
2. Find the longest subarray with sum as 0. 
For step 2 - https://www.geeksforgeeks.org/find-the-largest-subarray-with-0-sum/

Time Complexity - O(N)
Space Complexity - O(N)
*/

// Returns Length of the required subarray 
int maxLen(vector<int>& arr, int n) 
{ 
    unordered_map<int, int> presum; // Map to store the previous sums 
    int sum = 0; // Initialize the sum of elements 
    int max_len = 0; // Initialize result 
  
 
    for (int i = 0; i < n; i++) 
    { 
        sum += arr[i]; // Add current element to sum 
  
        if (arr[i] == 0 && max_len == 0) 
            max_len = 1; 
        
        if (sum == 0) 
            max_len = i + 1; 
  
        // Look for this sum in Hash table,
        // If this sum is seen before, then update max_len,
        // Else insert this sum with index in hash table
        if (presum.find(sum) != presum.end()) 
            max_len = max(max_len, i - presum[sum]); 
        else 
            presum[sum] = i; 
    } 
  
    return max_len; 
} 


class Solution {
public:
    int findMaxLength(vector<int>& nums) 
    {
        for(int i = 0 ; i < nums.size() ; i++ )
        {
            if(!nums[i])
                nums[i] = -1;
        }
        
        return maxLen(nums, nums.size());
    }
};
