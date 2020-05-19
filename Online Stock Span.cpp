//https://leetcode.com/explore/featured/card/may-leetcoding-challenge/536/week-3-may-15th-may-21st/3334/

//Online Stock Span


class StockSpanner {
public:
    stack <pair<int,int>> s1;
    StockSpanner() {
        
    }
    
    int next(int price) 
    {
        int ans = 1;
        
        while (!s1.empty() && s1.top().first <= price)
        {
            ans += s1.top().second;
            s1.pop();
        }
        
        s1.push(make_pair(price,ans));
        
        return ans;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
