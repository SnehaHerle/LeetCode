//https://leetcode.com/explore/featured/card/june-leetcoding-challenge/541/week-3-june-15th-june-21st/3366/

//Permutation Sequence

class Solution {
public:
    string getPermutation(int n, int k) {
        string s = "";
        for (int i = 1; i <= n; i++)
            s += to_string(i);
        int curPerm = 1;
        while (curPerm < k) {
            curPerm++;
            next_permutation(s.begin(), s.end());
        }
        return s;
    }
};
