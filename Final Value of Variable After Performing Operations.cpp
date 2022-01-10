class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int value = 0;
        for(auto const &op: operations){
            if(count(op.begin(), op.end(), '+'))
                value++;
            else value--;
        }
        return value;    
    }
};
