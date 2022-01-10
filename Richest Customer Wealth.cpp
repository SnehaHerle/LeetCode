class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int wealth = 0;
        int sum = 0;
        for(auto const &acc : accounts){
            sum = 0;
            for(auto const &a : acc){
                sum += a;
            }
            if(sum > wealth)
                wealth = sum;
        }
        return wealth;
    }
};
