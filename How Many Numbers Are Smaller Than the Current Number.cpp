class Solution {            //0(nlogn)
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
      unordered_map<int, int > map;
      vector<int> v(nums);     //[8,1,2,2,3]  copy of nums array
      
      sort(v.begin(), v.end());  //[1,2,2,3,8]  
      
      for(int i = 0; i<v.size() ; i++)    
      {
          //map[v[i]] = i;   can't use this  bcz of duplicate elements//
          map.insert({v[i], i});
      }
	  //map[1]=>0  
	  //map[2]=>1  
	  //map[2]=>1  
	  //map[3]=>3  
	  //map[8]=>4
      
	  for(int i =0 ; i< nums.size(); i++)
      {
         v[i] = map[nums[i]];    // simply iterate original array, and get counts from the map.
      }
      return v;     //[4,0,1,1,3]
    }
};
