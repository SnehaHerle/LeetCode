class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxInArray = candies[0];
        vector<bool> result(candies.size());
        for(int i = 0; i < candies.size(); i++){
            if(candies[i] > maxInArray)
                maxInArray = candies[i];
        }
        
        for(int i = 0; i < candies.size(); i++){
            if(candies[i] == maxInArray)
                result[i] = true;
            else if((candies[i] + extraCandies) >= maxInArray)
                result[i] = true;
            else 
                result[i] = false;
        }
        return result;
    }
};
