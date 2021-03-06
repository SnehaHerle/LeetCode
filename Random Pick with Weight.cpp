//https://leetcode.com/explore/challenge/card/june-leetcoding-challenge/539/week-1-june-1st-june-7th/3351/

//Random Pick with Weight


class Solution {
    vector<int> v;
public:
    Solution(vector<int>& w) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        
        v.push_back(w[0]);
        for(int i=1;i<w.size();++i)
            v.push_back(v.back()+w[i]);    //Cumulative SUM
    }
    
    int pickIndex() {
        int rand_weight = rand()%(v.back()+1);
        return upper_bound(v.begin(),v.end(),rand_weight)-v.begin();
        
    }
};
