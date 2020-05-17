// https://medium.com/p/d079a4f108e0/info

// https://leetcode.com/explore/featured/card/may-leetcoding-challenge/536/week-3-may-15th-may-21st/3330/

// Maximum Sum in Circular Subarray

class Solution {
public:
    int maxSubarraySumCircular(vector<int>& A) 
    {
        int total = 0, maxSum = INT_MIN, curMax = 0, minSum = INT_MAX, curMin = 0;
        
        for (int i: A) 
        {
            curMax = max(curMax + i,i);   //Kadane's for max sum in a contiguous subarray
            maxSum = max(maxSum, curMax);
			
            curMin = min(curMin + i, i);   //Kadane's for min sum in a contiguous subarray
            minSum = min(minSum, curMin);
			
            total += i;
        }
        
        return maxSum > 0 ? max(maxSum, total - minSum) : maxSum;     //if maxSum < 0 means all the numbers were negative

    }
};
