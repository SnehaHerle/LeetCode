class Solution {
public:
    int subtractProductAndSum(int n) {
        int product = 1, sum = 0, num = n;
        while(num){
            int digit = num % 10;
            product *= digit;
            sum += digit;
            num = num / 10;
        }
        return (product - sum);
    }
};
