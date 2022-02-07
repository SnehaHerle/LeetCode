class Solution {
public:
    int trailingZeroes(int n) {
        int result = 0;
        for(int i = 5; i<=n ; i = i*5){
            result = result + (n/i);
        }// Write Your Code here
        return result;
    }
};
