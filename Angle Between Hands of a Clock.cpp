//https://leetcode.com/explore/featured/card/july-leetcoding-challenge/545/week-2-july-8th-july-14th/3390/

class Solution {
public:
    double angleClock(int hour, int minutes) 
    {
        if(hour == 12)
            hour = 0;
        double diff = (minutes*6)-((hour*60*0.5) + (minutes*0.5));
        if(diff < 0)
            diff = -1*diff;
        cout<<diff;
        if(diff > 180)
            return 360 - diff;
        return diff;
    }
};
