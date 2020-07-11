//https://leetcode.com/explore/featured/card/july-leetcoding-challenge/545/week-2-july-8th-july-14th/3387/

//O(2^N)

//Bit-masking

class Solution 
{
public:
    vector<vector<int>> subsets(vector<int>& nums) 
    {
        vector<vector<int> > ans;
        int z = pow(2,nums.size());
        
        for(int i = 0; i < z; i++)
        {
            vector<int> p;
            int b = 0;
            int x = i;
            
            while(x)
            {
                if(x & 1)
                    p.push_back(nums[b]);
                b++;
                x /= 2;
            }
            
            ans.push_back(p);
        }
        return ans;
    }
};


 
