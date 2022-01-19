class Solution {
public:
    int xorOperation(int n, int start) {
        int xor1 = start, i = 0;
        while(i<n){
            int temp = start + 2*i;
            if(i != 0)
                xor1 = xor1 ^ temp;
            i++;
        }
        return xor1;
    }
};
