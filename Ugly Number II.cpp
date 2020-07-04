class Solution {
public:
    int nthUglyNumber(int n) 
    {
        vector<int> two, three, five;
        long int ans = 1, a = 2, b = 3, c = 5;
        if(n == 1)
            return 1;
        long int i = 0, j = 0, k = 0;
        while(n-1)
        {
            two.push_back(ans*2);
            three.push_back(ans*3);
            five.push_back(ans*5);
            ans = min(min(two[i], three[j]), five[k]);
            //cout<<ans<<endl;
            if(ans == two[i])
                i++;
            if(ans == three[j])
                j++;
            if(ans == five[k])
                k++;
            n--;
        }
        return ans;
    }
};
